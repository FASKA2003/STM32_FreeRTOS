#include "stm32f446xx.h"
#include <main.h>
#include <stm32f4xx_hal.h>
#include <stm32f4xx_hal_gpio.h>

int main(int argc, char *argv[]) {
  GPIO_InitTypeDef *GPIO_Init;
  GPIO_Init->Pin = GPIO_PIN_5;
  GPIO_Init->Mode = OUTPUT_PP;

  HAL_GPIO_Init(GPIOA, GPIO_Init);
  HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);
  return 0;
}
