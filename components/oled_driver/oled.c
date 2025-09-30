#include "oled.h"
#include "ssd1306.h"  

static SSD1306_t dev;

void oled_init() {
    i2c_master_init(&dev, 21, 22, 0);  
    ssd1306_init(&dev, 128, 64);
    ssd1306_clear_screen(&dev, false);
}

void oled_show_text(const char *text, int row, int col) {
    ssd1306_display_text(&dev, row, text, strlen(text), false);
}
