#include "pebble_os.h"
#include "pebble_app.h"
#include "pebble_fonts.h"


#define MY_UUID { 0x2A, 0x2C, 0x1C, 0x86, 0x61, 0xD4, 0x47, 0x23, 0xBB, 0x4F, 0x58, 0x45, 0x49, 0xD4, 0xD6, 0x55 }
PBL_APP_INFO(MY_UUID,
             "Template App", "Jeff Drake inc.",
             1, 0, /* App version */
             DEFAULT_MENU_ICON,
             APP_INFO_STANDARD_APP);

Window window;


void handle_init(AppContextRef ctx) {

  window_init(&window, "Window Name");
  window_stack_push(&window, true /* Animated */);
}


void pbl_main(void *params) {
  PebbleAppHandlers handlers = {
    .init_handler = &handle_init
  };
  app_event_loop(params, &handlers);
}
