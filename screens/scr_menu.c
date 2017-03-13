#include <string.h>
#include <stdio.h>
#include "nrf_soc.h"
#include "scr_menu.h"
#include "../scr_mngr.h"
#include "../mlcd_draw.h"
#include "../mlcd.h"
#include "../graph.h"
#include "../i18n/i18n.h"
#include "../fs.h"
#include "../rtc.h"
#include "../alarm.h"
#include "../ext_ram.h"
#include "../config.h"
#include "../accel.h"
#include "../watchset.h"
#include "../notifications.h"
#include "dialog_select.h"

#define SCROLL_HEIGHT			6
#define MENU_ITEM_HEIGHT		20
#define MENU_ITEMS_PER_PAGE		7

static int8_t selectedOption = 0;
static int8_t lastSelectedOption = 0;
static uint8_t sizeOfMenu = 0;


static void draw_option(const MENU_OPTION *menu_list, uint_fast8_t item) {
	uint_fast8_t yPos = HEADER_HEIGHT + 4 + MENU_ITEM_HEIGHT * (item % MENU_ITEMS_PER_PAGE);
	mlcd_draw_text(I18N_TRANSLATE(menu_list[item].message_key), MARGIN_LEFT, yPos, MLCD_XRES-MARGIN_LEFT, 0, FONT_OPTION_NORMAL, HORIZONTAL_ALIGN_LEFT);
	void (*s_drawer)(uint8_t x, uint8_t y) = menu_list[item].summary_drawer;
	uint8_t sel_width = MLCD_XRES;
	if (s_drawer != NULL) {
		s_drawer(SUMMARY_X, yPos);
		sel_width = SUMMARY_X;
	}
	if (item == selectedOption)
		fillRectangle(0, yPos-2, sel_width, MENU_ITEM_HEIGHT, DRAW_XOR);
}

static void scr_menu_draw_options(const MENU_OPTION *menu_list) {
	uint8_t page_no = selectedOption / MENU_ITEMS_PER_PAGE;
	uint8_t start_item = page_no * MENU_ITEMS_PER_PAGE;
	uint8_t items_no;
	if (sizeOfMenu - start_item < MENU_ITEMS_PER_PAGE)
		items_no = sizeOfMenu - start_item;
	else
		items_no = MENU_ITEMS_PER_PAGE;
	for (int i=0; i<items_no; i++) {
		draw_option(menu_list, start_item+i);
	}
	if (page_no > 0)
		fillUp(MLCD_XRES/2, HEADER_HEIGHT-SCROLL_HEIGHT-2, SCROLL_HEIGHT, DRAW_WHITE);
	if (page_no + 1 < CEIL(sizeOfMenu, MENU_ITEMS_PER_PAGE))
		fillDown(MLCD_XRES/2, MLCD_YRES-3, SCROLL_HEIGHT, DRAW_WHITE);
	if (lastSelectedOption / MENU_ITEMS_PER_PAGE == 1 && page_no == 0) {
		fillRectangle(0, 0, MLCD_XRES, HEADER_HEIGHT, DRAW_BLACK);
		scr_mngr_draw_notification_bar();
	}
}

static void scr_menu_refresh_screen(const MENU_OPTION *menu_list) {
	scr_mngr_redraw_notification_bar();
	if (lastSelectedOption == selectedOption)
		return;
	if (lastSelectedOption / MENU_ITEMS_PER_PAGE != selectedOption / MENU_ITEMS_PER_PAGE) {
		// on page change
		fillRectangle(0, HEADER_HEIGHT, MLCD_XRES, MLCD_YRES-HEADER_HEIGHT, DRAW_BLACK);
		scr_menu_draw_options(menu_list);
	} else {
		// on item change
		uint8_t sel_width = MLCD_XRES;
		if (menu_list[selectedOption].summary_drawer != NULL)
			sel_width = SUMMARY_X;
		uint_fast8_t yPos = HEADER_HEIGHT + 2 + MENU_ITEM_HEIGHT * (selectedOption % MENU_ITEMS_PER_PAGE);
		fillRectangle(0, yPos, sel_width, MENU_ITEM_HEIGHT, DRAW_XOR);
		sel_width = MLCD_XRES;
		if (menu_list[lastSelectedOption].summary_drawer != NULL)
			sel_width = SUMMARY_X;
		yPos = HEADER_HEIGHT + 2 + MENU_ITEM_HEIGHT * (lastSelectedOption % MENU_ITEMS_PER_PAGE);
		fillRectangle(0, yPos, sel_width, MENU_ITEM_HEIGHT, DRAW_XOR);
	}
	lastSelectedOption = selectedOption;
}

static void scr_menu_init(const MENU_OPTION *menu_list) {
	sizeOfMenu = 0;

	/* The menu must end with {0, NULL, NULL, NULL} */
	for (uint8_t i = 0;; i++) {
		if (menu_list[i].message_key == 0 &&
			menu_list[i].select_handler == NULL &&
			menu_list[i].long_select_handler == NULL &&
			menu_list[i].summary_drawer == NULL) {
			break;
		}

		if (i == 255) {
			break;
		}

		sizeOfMenu++;
	}
}

static void scr_menu_draw_screen(const MENU_OPTION *menu_list) {
	scr_mngr_draw_notification_bar();
	scr_menu_draw_options(menu_list);
}

static void scr_refresh_summary(const MENU_OPTION *menu_list) {
	void (*s_drawer)(uint8_t, uint8_t) = menu_list[selectedOption].summary_drawer;
	if (s_drawer != NULL) {
		uint_fast8_t yPos = HEADER_HEIGHT+MENU_ITEM_HEIGHT*(selectedOption%MENU_ITEMS_PER_PAGE);
		fillRectangle(0, yPos+2, MLCD_XRES, MENU_ITEM_HEIGHT, DRAW_BLACK);
		draw_option(menu_list, selectedOption);
	}
}

static bool scr_menu_handle_button_pressed(const MENU_OPTION *menu_list, uint32_t button_id) {
	switch (button_id) {
		case SCR_EVENT_PARAM_BUTTON_BACK:
			scr_mngr_show_screen(SCR_WATCHFACE);
			return true;
		case SCR_EVENT_PARAM_BUTTON_UP:
			if (selectedOption > 0)
				selectedOption--;
			return true;
		case SCR_EVENT_PARAM_BUTTON_DOWN:
			if (selectedOption+1 < sizeOfMenu)
				selectedOption++;
			return true;
		case SCR_EVENT_PARAM_BUTTON_SELECT:
			menu_list[selectedOption].select_handler();
			scr_refresh_summary(menu_list);
	    return true;
	}
	return false;
}

static bool scr_menu_handle_button_long_pressed(const MENU_OPTION *menu_list, uint32_t button_id) {
	switch (button_id) {
		case SCR_EVENT_PARAM_BUTTON_UP:
			if (selectedOption > MENU_ITEMS_PER_PAGE)
				selectedOption -= MENU_ITEMS_PER_PAGE;
			else
				selectedOption = 0;
			return true;
		case SCR_EVENT_PARAM_BUTTON_DOWN:
			if (selectedOption + MENU_ITEMS_PER_PAGE < sizeOfMenu)
				selectedOption += MENU_ITEMS_PER_PAGE;
			else
				selectedOption = sizeOfMenu-1;
			return true;
		case SCR_EVENT_PARAM_BUTTON_SELECT: {
			void (*ls_handler)() = menu_list[selectedOption].long_select_handler;
			if (ls_handler != NULL) {
				ls_handler();
				scr_refresh_summary(menu_list);
				return true;
			}
		}
	}
	return false;
}

bool scr_menu_handle_event(const MENU_OPTION *menu_list, uint32_t event_type, uint32_t event_param) {
	switch(event_type) {
		case SCR_EVENT_INIT_SCREEN:
			scr_menu_init(menu_list);
			return true;
		case SCR_EVENT_DRAW_SCREEN:
			scr_menu_draw_screen(menu_list);
			return true;
		case SCR_EVENT_REFRESH_SCREEN:
			scr_menu_refresh_screen(menu_list);
			return true;
		case SCR_EVENT_BUTTON_PRESSED:
			return scr_menu_handle_button_pressed(menu_list, event_param);
		case SCR_EVENT_BUTTON_LONG_PRESSED: {
			return scr_menu_handle_button_long_pressed(menu_list, event_param);
		}
	}
	return false;
}
