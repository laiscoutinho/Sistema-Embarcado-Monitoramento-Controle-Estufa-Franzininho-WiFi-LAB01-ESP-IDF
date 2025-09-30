#ifndef LDR_H
#define LDR_H

#include "driver/adc.h"

void ldr_init(adc1_channel_t channel);
int ldr_read();

#endif
