//
// Created by wangguan on 23-10-6.
//

#ifndef LIGHTING_EFFECT_CONTROL_WS2812_H
#define LIGHTING_EFFECT_CONTROL_WS2812_H
#define   Zero 28
#define   One 68
extern TIM_HandleTypeDef htim1;
extern uint16_t txbuffer[24];

void LEDInit();

void RGBTransmassion(uint8_t R, uint8_t G, uint8_t B, uint16_t *target);


#endif //LIGHTING_EFFECT_CONTROL_WS2812_H
