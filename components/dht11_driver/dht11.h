#ifndef DHT11_H
#define DHT11_H

#include "driver/gpio.h"

typedef struct {
    int temperature;
    int humidity;
} dht11_data_t;

void dht11_init(gpio_num_t pin);
dht11_data_t dht11_read();

#endif
