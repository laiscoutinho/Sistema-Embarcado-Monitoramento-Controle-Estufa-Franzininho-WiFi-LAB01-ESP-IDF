#include "ldr.h"

static adc1_channel_t ldr_channel;

void ldr_init(adc1_channel_t channel) {
    ldr_channel = channel;
    adc1_config_width(ADC_WIDTH_BIT_12);
    adc1_config_channel_atten(ldr_channel, ADC_ATTEN_DB_11);
}

int ldr_read() {
    return adc1_get_raw(ldr_channel);
}
