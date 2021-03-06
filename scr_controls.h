#ifndef SCR_CONTROLS_H
#define SCR_CONTROLS_H

#include <stdbool.h>
#include <stdint.h>
#include "spiffs/spiffs.h"

#define SCR_CONTROL_STATIC_RECT              0
#define SCR_CONTROL_NUMBER                   1
#define SCR_CONTROL_PROGRESS_BAR  					 2
#define SCR_CONTROL_TEXT  									 4
#define SCR_CONTROL_STATIC_IMAGE  					 5
#define SCR_CONTROL_IMAGE_FROM_SET 					 6
#define SCR_CONTROL_TEXT_FROM_SET 					 7
#define SCR_CONTROL_WATCH_HAND 							 8

#define NUMBER_RANGE_0__9     0x10
#define NUMBER_RANGE_0__19    0x20
#define NUMBER_RANGE_0__99    0x30
#define NUMBER_RANGE_0__199   0x40
#define NUMBER_RANGE_0__999   0x50
#define NUMBER_RANGE_0__1999  0x60
#define NUMBER_RANGE_0__9999  0x70
#define NUMBER_RANGE_0__19999 0x80
#define NUMBER_RANGE_0__99999 0x90
#define NUMBER_RANGE_0__9_9     0x11
#define NUMBER_RANGE_0__19_9    0x21
#define NUMBER_RANGE_0__99_9    0x31
#define NUMBER_RANGE_0__199_9   0x41
#define NUMBER_RANGE_0__999_9   0x51
#define NUMBER_RANGE_0__1999_9  0x61
#define NUMBER_RANGE_0__9999_9  0x71
#define NUMBER_RANGE_0__19999_9 0x81
#define NUMBER_RANGE_0__99999_9 0x91
#define NUMBER_RANGE_0__9_99     0x12
#define NUMBER_RANGE_0__19_99    0x22
#define NUMBER_RANGE_0__99_99    0x32
#define NUMBER_RANGE_0__199_99   0x42
#define NUMBER_RANGE_0__999_99   0x52
#define NUMBER_RANGE_0__1999_99  0x62
#define NUMBER_RANGE_0__9999_99  0x72
#define NUMBER_RANGE_0__19999_99 0x82
#define NUMBER_RANGE_0__99999_99 0x92

#define NUMBER_FORMAT_FLAG_ZERO_PADDED    0x20000000

typedef struct
{
	  uint32_t last_value __attribute__((__packed__));
} NUMBER_CONTROL_DATA;

typedef struct
{
	  char* last_value;
} TEXT_CONTROL_DATA;

typedef struct
{
	  uint8_t range;
	  uint8_t x;
	  uint8_t y;
	  uint32_t style;
	  uint32_t (* data_handle)(uint32_t, uint8_t, uint8_t*, bool*);
	  uint32_t data_handle_param;
	  NUMBER_CONTROL_DATA* data;
} SCR_CONTROL_NUMBER_CONFIG;	

typedef struct
{
	  uint8_t x;
	  uint8_t y;
	  uint8_t width;
	  uint8_t height;
	  uint32_t style;
	  uint32_t (* data_handle)(uint32_t, uint8_t, uint8_t*, bool*);
	  uint32_t data_handle_param;
	  TEXT_CONTROL_DATA* data;
} SCR_CONTROL_TEXT_CONFIG;	

typedef struct
{
	  const uint8_t x;
	  const uint8_t y;
	  const uint8_t width;
	  const uint8_t height;
} SCR_CONTROL_STATIC_RECT_CONFIG;	

typedef struct
{
	  uint8_t x;
	  uint8_t y;
	  uint8_t width;
	  uint8_t height;
		spiffs_file file;
} SCR_CONTROL_STATIC_IMAGE_CONFIG;	

typedef struct
{
	  uint8_t x;
	  uint8_t y;
	  uint8_t width;
	  uint8_t height;
		spiffs_file file;
	  uint32_t (* data_handle)(uint32_t, uint8_t, uint8_t*, bool*);
	  uint32_t data_handle_param;
	  NUMBER_CONTROL_DATA* data;
} SCR_CONTROL_IMAGE_FROM_SET_CONFIG;	

typedef struct
{
	  uint8_t x;
	  uint8_t y;
	  uint8_t width;
	  uint8_t height;
	  uint32_t max;
	  uint32_t style;
	  uint32_t (* data_handle)(uint32_t, uint8_t, uint8_t*, bool*);
	  uint32_t data_handle_param;
	  NUMBER_CONTROL_DATA* data;
} SCR_CONTROL_PROGRESS_BAR_CONFIG;	

typedef struct
{
	  uint8_t cx;
	  uint8_t cy;
	  uint16_t deg;
	  uint8_t radius1;
	  uint8_t radius2;
	  uint8_t width;
	  uint32_t style;
	  uint32_t (* data_handle)(uint32_t, uint8_t, uint8_t*, bool*);
	  uint32_t data_handle_param;
	  NUMBER_CONTROL_DATA* data;
} SCR_CONTROL_WATCH_HAND_CONFIG;

typedef struct
{
	  uint8_t type;
	  void* config;
} SCR_CONTROL_DEFINITION;

typedef struct
{
	  uint8_t controls_no;
	  SCR_CONTROL_DEFINITION* controls;
} SCR_CONTROLS_DEFINITION;

void scr_controls_draw(const SCR_CONTROLS_DEFINITION*);

void scr_controls_redraw(const SCR_CONTROLS_DEFINITION*);

void scr_controls_draw_number_control(SCR_CONTROL_NUMBER_CONFIG* cfg, bool force);

void scr_controls_draw_text_control(SCR_CONTROL_TEXT_CONFIG* cfg, bool force);

void scr_controls_draw_progress_bar_control(SCR_CONTROL_PROGRESS_BAR_CONFIG* cfg, bool force);

void scr_controls_draw_static_image_control(SCR_CONTROL_STATIC_IMAGE_CONFIG* cfg, bool force);

void scr_controls_draw_image_from_set_control(SCR_CONTROL_IMAGE_FROM_SET_CONFIG* cfg, bool force);

#endif /* SCR_CONTROLS_H */
