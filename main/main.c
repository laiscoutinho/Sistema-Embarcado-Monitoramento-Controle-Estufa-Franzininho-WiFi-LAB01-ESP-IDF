#include <stdio.h>
#include "dht11.h"
#include "ldr.h"
#include "oled.h"
#include "menu.h"
#include "storage.h"

void app_main() {
    dht11_init(GPIO_NUM_4);
    ldr_init(ADC1_CHANNEL_0);
    oled_init();
    menu_init();
    storage_init();

    while (1) {
        dht11_data_t d = dht11_read();
        int light = ldr_read();

        char buffer[32];
        snprintf(buffer, sizeof(buffer), "T:%d H:%d L:%d", d.temperature, d.humidity, light);
        oled_show_text(buffer, 0, 0);

        storage_write(buffer);

        vTaskDelay(pdMS_TO_TICKS(2000));
    }
}
