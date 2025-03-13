
#include "main.h"
#include "adc.h"
#include "spi.h"
#include "usart.h"
#include "gpio.h"
#include <stdio.h>
#include <string.h>
#include "LoRa.h"

LoRa myLoRa;
uint8_t LoRa_stat = 0;

void SystemClock_Config(void);

int main(void)
{
  HAL_Init();
  SystemClock_Config();
  MX_GPIO_Init();
  MX_SPI1_Init();
  MX_USART2_UART_Init();

  myLoRa = newLoRa();
  myLoRa.CS_port = NSS_GPIO_Port;
  myLoRa.CS_pin = NSS_Pin;
  myLoRa.reset_port = RST_GPIO_Port;
  myLoRa.reset_pin = RST_Pin;
  myLoRa.DIO0_port = DIO0_GPIO_Port;
  myLoRa.DIO0_pin = DIO0_Pin;
  myLoRa.hSPIx = &hspi1;

  myLoRa.frequency = 433;
  myLoRa.spredingFactor = SF_10;
  myLoRa.bandWidth = BW_250KHz;
  myLoRa.crcRate = CR_4_5;
  myLoRa.power = POWER_20db;
  myLoRa.overCurrentProtection = 100;
  myLoRa.preamble = 8;

  if(LoRa_init(&myLoRa) == LORA_OK) {
    LoRa_stat = 1;
  }
  
  uint8_t tx_buffer[] = "hello";

  while (1)
  {
    LoRa_transmit(&myLoRa, (uint8_t*)tx_buffer, 5, 500);
    HAL_UART_Transmit(&huart2, tx_buffer, 6, 1000);
    HAL_Delay(3000);
  }
}

void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

void Error_Handler(void)
{
  __disable_irq();
  while (1)
  {
  }
}

#ifdef USE_FULL_ASSERT
void assert_failed(uint8_t *file, uint32_t line)
{
}
#endif
