#include <string.h>
#include "scr_notifications.h"
#include "../scr_mngr.h"
#include "../scr_controls.h"
#include "../notifications.h"
#include "../mlcd_draw.h"
#include "../mlcd.h"
#include "../graph.h"
#include "../ext_ram.h"
#include "../utf8.h"
#include "../config.h"
#include "../i18n/i18n.h"
#include "../ble/ble_peripheral.h"
#include <stdlib.h> 

#define MARGIN_LEFT 1

static bool scr_notifications_handle_button_pressed(uint32_t button_id) {
	  switch (button_id) {
			  case SCR_EVENT_PARAM_BUTTON_BACK:
						scr_mngr_close_notifications();
				    return true;
			  case SCR_EVENT_PARAM_BUTTON_UP:
				{
						uint16_t read_address = notifications_get_current_data();
						uint8_t notification_type = get_next_byte(&read_address);
	
						if (notification_type != NOTIFICATIONS_CATEGORY_SUMMARY) {
								uint16_t notification_id = get_next_short(&read_address);
								uint8_t page = get_next_byte(&read_address);
								if (page > 0) {
										notifications_prev_part(notification_id, page);
								}
						}
				}
				    return true;
			  case SCR_EVENT_PARAM_BUTTON_DOWN:
				{					
						uint16_t read_address = notifications_get_current_data();
						uint8_t notification_type = get_next_byte(&read_address);
	
						if (notification_type == NOTIFICATIONS_CATEGORY_SUMMARY) {
								//show first
								notifications_invoke_function(NOTIFICATIONS_SHOW_FIRST);
						} else {
								uint16_t notification_id = get_next_short(&read_address);
								uint8_t page = get_next_byte(&read_address);
								uint8_t font = get_next_byte(&read_address);
								bool has_more = get_next_byte(&read_address);
								if (has_more) {
										notifications_next_part(notification_id, page);
								} else {
										notifications_next(notification_id);
								}
						}
				}
				    return true;
			  case SCR_EVENT_PARAM_BUTTON_SELECT:
				{
						uint16_t read_address = notifications_get_current_data();
						uint8_t notification_type = get_next_byte(&read_address);
	
						if (notification_type != NOTIFICATIONS_CATEGORY_SUMMARY) {
								uint16_t notification_id = get_next_short(&read_address);
								notifications_open(notification_id);
						}
				}
				    return true;
		}
		return false;
}

static bool scr_notifications_handle_button_long_pressed(uint32_t button_id) {
	  switch (button_id) {
			  case SCR_EVENT_PARAM_BUTTON_DOWN:
				{
						uint16_t read_address = notifications_get_current_data();
						uint8_t notification_type = get_next_byte(&read_address);
						if (notification_type != NOTIFICATIONS_CATEGORY_SUMMARY) {
								uint16_t notification_id = get_next_short(&read_address);
								notifications_next(notification_id);
						}				
				}
				    return true;
		}
		return false;
}

static void scr_notifications_init() {
}

static void scr_notifications_draw_screen() {
	scr_mngr_draw_notification_bar();
	uint16_t read_address = notifications_get_current_data();
  uint8_t notification_type = get_next_byte(&read_address);
	
	switch(notification_type) {
		case NOTIFICATIONS_CATEGORY_MESSAGE:
		case NOTIFICATIONS_CATEGORY_EMAIL:
		case NOTIFICATIONS_CATEGORY_SOCIAL:
		case NOTIFICATIONS_CATEGORY_ALARM:
		case NOTIFICATIONS_CATEGORY_INCOMING_CALL:
		case NOTIFICATIONS_CATEGORY_OTHER:
		{
			uint16_t notification_id = get_next_short(&read_address);
			uint8_t page = get_next_byte(&read_address);
			uint8_t font = get_next_byte(&read_address);
			bool has_more = get_next_byte(&read_address);

			int msg_count = get_ext_ram_byte(EXT_RAM_MSG_COUNT);
			if (msg_count == 0)
				msg_count = 1;

			if (msg_count > 9)
				mlcd_draw_digit(msg_count/10, MLCD_XRES/2-10, 0, 8, 12, 2);
			mlcd_draw_digit(msg_count%10, MLCD_XRES/2, 0, 8, 12, 2);
			char* data_ptr = (char*)(0x80000000 + read_address);
			mlcd_draw_text(data_ptr, MARGIN_LEFT, HEADER_HEIGHT, MLCD_XRES-2*MARGIN_LEFT, MLCD_YRES-HEADER_HEIGHT,
				font, HORIZONTAL_ALIGN_LEFT | MULTILINE);
			if (get_settings(CONFIG_NOTIFICATION_LIGHT))
				mlcd_backlight_short();
		}
		break;
		case NOTIFICATIONS_CATEGORY_SUMMARY:
		{
			uint8_t notification_count = get_next_byte(&read_address);
			put_ext_ram_byte(EXT_RAM_MSG_COUNT, notification_count);
			if (notification_count > 0)
				notifications_invoke_function(NOTIFICATIONS_SHOW_FIRST);
			else {
				mlcd_draw_text(I18N_TRANSLATE(MESSAGE_NO_MESSAGES), 0, MLCD_YRES/2-30, MLCD_XRES, 60, FONT_OPTION_BIG, HORIZONTAL_ALIGN_CENTER | MULTILINE);
//				scr_mngr_close_notifications();
			}
		}
		break;
	}
}

static void scr_notifications_refresh_screen() {
	scr_mngr_redraw_notification_bar();
}

bool scr_notifications_handle_event(uint32_t event_type, uint32_t event_param) {
	  switch(event_type) {
			  case SCR_EVENT_INIT_SCREEN:
				    scr_notifications_init();
				    return true;
        case SCR_EVENT_DRAW_SCREEN:
            scr_notifications_draw_screen();
				    return true;
        case SCR_EVENT_REFRESH_SCREEN:
            scr_notifications_refresh_screen();
				    return true;
			  case SCR_EVENT_BUTTON_PRESSED:
				    return scr_notifications_handle_button_pressed(event_param);
			  case SCR_EVENT_BUTTON_LONG_PRESSED:
				    return scr_notifications_handle_button_long_pressed(event_param);
		}
		return false;
}
