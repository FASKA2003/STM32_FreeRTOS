#include <main.h>
#include <stm32f4xx.h>
#include <stm32f4xx_hal_rcc.h>

int main(void) {
  // reset the RCC clock configuration to the default state :
  HAL_RCC_DeInit();

  // Update the SystemCoreClock variable
  SystemCoreClockUpdate();

  return 0;
}
