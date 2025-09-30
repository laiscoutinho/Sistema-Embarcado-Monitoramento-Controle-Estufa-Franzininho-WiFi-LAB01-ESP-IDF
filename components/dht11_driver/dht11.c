#include "dht11.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

static gpio_num_t dht_pin;

void dht11_init(gpio_num_t pin) {
    dht_pin = pin;
    gpio_set_direction(dht_pin, GPIO_MODE_INPUT_OUTPUT);
}

dht11_data_t dht11_read() {
    dht11_data_t data = {25, 60};
    return data;
}
