#include "menu.h"

static menu_option_t current_option = MENU_VIEW_DATA;

void menu_init() {
    current_option = MENU_VIEW_DATA;
}

void menu_next() {
    current_option = (current_option + 1) % 4;
}

menu_option_t menu_get_current() {
    return current_option;
}
