//
// Created by wangguan on 23-10-6.
//
#include "main.h"
#include "WS2812.h"


void LEDInit() {
    HAL_TIM_PWM_Start_DMA(&htim1, TIM_CHANNEL_1, (uint32_t *) txbuffer, 24);
}

void RGBTransmassion(uint8_t R, uint8_t G, uint8_t B) {
    uint32_t data = G << 12 | R << 8 | B;
    uint16_t buffer[24];
    for (uint8_t i = 0; i < 24; i++) {
        // 使用位掩码来获取每个位的值（0或1）
        uint8_t bit = (data >> i) & 1;
        if (bit == 1) {
            txbuffer[i + 1] = One;
        } else {
            txbuffer[i + 1] = Zero;
        }
    }
    memcpy(txbuffer, buffer, sizeof txbuffer);
}

void HAL_TIM_PWM_PulseFinishedCallback(TIM_HandleTypeDef *htim) {
    if (htim == &htim1) {

    }
}