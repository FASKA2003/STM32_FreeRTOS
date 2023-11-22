#include <FreeRTOS.h>
#include <stm32f4xx.h>
#include <stm32f4xx_hal_rcc.h>
#include <task.h>

// Taks handlers types.
TaskHandle_t xTaskHandle1 = NULL;
TaskHandle_t xTaskHandle2 = NULL;

// Task handlers prototypes.
void vTask1_handler(void *parameter);
void vTask2_handler(void *parameter);
void vApplicationIdleHook(void);
void vApplicationGetIdleTaskMemory(StaticTask_t **ppxIdleTaskTCBBuffer,
                                   StackType_t **ppxIdleTaskStackBuffer,
                                   uint32_t *pulIdleTaskStackSize);
void vApplicationGetTimerTaskMemory(void);

int main(void) {
  // reset the RCC clock configuration to the default state :
  HAL_RCC_DeInit();

  // Update the SystemCoreClock variable
  SystemCoreClockUpdate();

  // Let's create the two tasks.
  xTaskCreate(vTask1_handler, "Print_Task1", configMINIMAL_STACK_SIZE, NULL, 2,
              &xTaskHandle1);

  xTaskCreate(vTask2_handler, "Print_Task2", configMINIMAL_STACK_SIZE, NULL, 2,
              &xTaskHandle2);

  // call the schedular
  vTaskStartScheduler();

  return 0;
}

void vTask1_handler(void *parameter) {
  while (1) {
  }
}
void vTask2_handler(void *parameter) {
  while (1) {
  }
}
void vApplicationIdleHook(void) {
  while (1) {
  }
}
void vApplicationGetIdleTaskMemory(StaticTask_t **ppxIdleTaskTCBBuffer,
                                   StackType_t **ppxIdleTaskStackBuffer,
                                   uint32_t *pulIdleTaskStackSize) {
  while (1) {
  }
}
void vApplicationGetTimerTaskMemory(void) {
  while (1) {
  }
}
