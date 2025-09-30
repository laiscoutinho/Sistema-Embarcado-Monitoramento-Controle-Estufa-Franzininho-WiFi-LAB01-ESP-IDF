#ifndef MENU_H
#define MENU_H

typedef enum {
    MENU_VIEW_DATA,
    MENU_SET_TEMP,
    MENU_LOG_ENABLE,
    MENU_CONTROL_POWER
} menu_option_t;

void menu_init();
void menu_next();
menu_option_t menu_get_current();

#endif
