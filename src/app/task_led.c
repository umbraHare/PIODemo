/**
 * @file task_led.c
 * @brief Application task body
 */

#include "bsp_led.h"

/**
 * @brief Water LEDs
 */
void task_led(void *p_arg) {
  uc16 nms = 500;
  while (1) {
    LED_R(0);
    LED_G(1);
    delay_ms(nms);
    LED_R(1);
    LED_G(0);
    delay_ms(nms);
  }
}
