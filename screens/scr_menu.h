#ifndef SCR_MENU_H
#define SCR_MENU_H

#include <stdbool.h>
#include <stdint.h>

#define MARGIN_LEFT			3
#define SUMMARY_X			102
#define MENU_SWITCH_PADDING_X		10

typedef struct {
	const uint16_t message_key;
	void (*select_handler)();
	void (*long_select_handler)();
	void (*summary_drawer)(uint8_t x, uint8_t y);
} MENU_OPTION;


bool scr_menu_handle_event(const MENU_OPTION *menu_list, uint32_t event_type, uint32_t event_param);

#endif /* SCR_MENU_H */
