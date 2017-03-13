#include "scr_changetime.h"
#include "../scr_mngr.h"
#include "../mlcd_draw.h"
#include "../graph.h"
#include "../rtc.h"
#include "../i18n/i18n.h"
#include "time.h"

static int8_t hour;
static int8_t minutes;

#define TIME_Y_POS     90
#define MODE_HOUR      0x01
#define MODE_MINUTES   0x02

static uint8_t change_mode;

static void scr_changetime_draw_hour() {
	  mlcd_draw_digit(hour/10, 4, TIME_Y_POS, 28, 38, 4);
	  mlcd_draw_digit(hour%10, 36, TIME_Y_POS, 28, 38, 4);
}

static void scr_changetime_draw_minutes() {
	  mlcd_draw_digit(minutes/10, 80, TIME_Y_POS, 28, 38, 4);
	  mlcd_draw_digit(minutes%10, 112, TIME_Y_POS, 28, 38, 4);
}

static void scr_changetime_draw_all() {
	  mlcd_draw_text(I18N_TRANSLATE(MESSAGE_SET_TIME), 19, 13, 0, 0, FONT_OPTION_BIG, 0);
	  fillRectangle(0, 50, MLCD_XRES, 2, DRAW_WHITE);
	
	  fillRectangle(69, TIME_Y_POS + 22, 5, 5, DRAW_WHITE);
	  fillRectangle(69, TIME_Y_POS + 10, 5, 5, DRAW_WHITE);
	
	  if (change_mode == MODE_HOUR) {
			  mlcd_draw_rect_border(1, TIME_Y_POS - 3, 66, 44, 1);
			  mlcd_draw_arrow_down(14, TIME_Y_POS + 48, 40, 20, 6);
			  mlcd_draw_arrow_up(14, TIME_Y_POS - 30, 40, 20, 6);
		} else if (change_mode == MODE_MINUTES) {
			  mlcd_draw_rect_border(77, TIME_Y_POS - 3, 66, 44, 1);
			  mlcd_draw_arrow_down(90, TIME_Y_POS + 48, 40, 20, 6);
			  mlcd_draw_arrow_up(90, TIME_Y_POS - 30, 40, 20, 6);
		}
		
	  scr_changetime_draw_hour();
	  scr_changetime_draw_minutes();
}

static void scr_changetime_handle_button_up(void) {
	  if(change_mode == MODE_HOUR) {
			  if(++hour > 23) {
					  hour = 0;
				}
				scr_changetime_draw_hour();
		}	  
		if(change_mode == MODE_MINUTES) {
			  if(++minutes > 59) {
					  minutes = 0;
				}
				scr_changetime_draw_minutes();
		}
	  mlcd_fb_flush();
}

static void scr_changetime_handle_button_down(void) {
		if(change_mode == MODE_HOUR) {
			  if(--hour < 0) {
					  hour = 23;
				}
				scr_changetime_draw_hour();
		}	  
		if(change_mode == MODE_MINUTES) {
			  if(--minutes < 0) {
					  minutes = 59;
				}
				scr_changetime_draw_minutes();
		}
	  mlcd_fb_flush();
}

static void scr_changetime_handle_button_select(void) {
	  if (change_mode == MODE_HOUR) {
			  change_mode = MODE_MINUTES;
			
				mlcd_fb_clear();
			  scr_changetime_draw_all();
	      mlcd_fb_flush();
		} else if (change_mode == MODE_MINUTES) {
				time_t t;
				time(&t);
				struct tm* time_struct = localtime(&t);

				time_struct->tm_hour = hour;
				time_struct->tm_min = minutes;
				time_struct->tm_sec = 0;
			  rtc_set_current_time(mktime(time_struct));
			  scr_mngr_show_screen(SCR_SETTINGS);
		}
}


static void scr_changetime_handle_button_back(void) {
	  
	  if (change_mode == MODE_HOUR) {
		    scr_mngr_show_screen(SCR_SETTINGS);
		} else if (change_mode == MODE_MINUTES) {
			  change_mode = MODE_HOUR;
				mlcd_fb_clear();
			  scr_changetime_draw_all();
	      mlcd_fb_flush();
		}
}

static bool scr_changetime_handle_button_pressed(uint32_t button_id) {
	  switch (button_id) {
			  case SCR_EVENT_PARAM_BUTTON_UP:
					  scr_changetime_handle_button_up();
				    return true;
			  case SCR_EVENT_PARAM_BUTTON_DOWN:
					  scr_changetime_handle_button_down();
				    return true;
			  case SCR_EVENT_PARAM_BUTTON_SELECT:
					  scr_changetime_handle_button_select();
				    return true;
			  case SCR_EVENT_PARAM_BUTTON_BACK:
					  scr_changetime_handle_button_back();
				    return true;
		}
		return false;
}

static void scr_changetime_init() {
	  time_t t;
	  time(&t);
	  struct tm* time_struct = localtime(&t);
	
	  hour = time_struct->tm_hour;
	  minutes = time_struct->tm_min;
	
	  change_mode = MODE_HOUR;
}

bool scr_changetime_handle_event(uint32_t event_type, uint32_t event_param) {
	  switch(event_type) {
			  case SCR_EVENT_INIT_SCREEN:
				    scr_changetime_init();
				    return true;
			  case SCR_EVENT_DRAW_SCREEN:
						scr_changetime_draw_all();
				    return true;
			  case SCR_EVENT_BUTTON_PRESSED:
				    return scr_changetime_handle_button_pressed(event_param);
		}
		return false;
}
