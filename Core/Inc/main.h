/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define ble_ncs_Pin GPIO_PIN_3
#define ble_ncs_GPIO_Port GPIOD
#define flash_cs_Pin GPIO_PIN_11
#define flash_cs_GPIO_Port GPIOC
#define ble_mosi_Pin GPIO_PIN_1
#define ble_mosi_GPIO_Port GPIOF
#define ble_miso_Pin GPIO_PIN_0
#define ble_miso_GPIO_Port GPIOF
#define flash_mosi_Pin GPIO_PIN_8
#define flash_mosi_GPIO_Port GPIOF
#define ble_clk_Pin GPIO_PIN_4
#define ble_clk_GPIO_Port GPIOF
#define flash_clk_Pin GPIO_PIN_10
#define flash_clk_GPIO_Port GPIOF
#define flash_miso_Pin GPIO_PIN_9
#define flash_miso_GPIO_Port GPIOF
#define ble_irq_Pin GPIO_PIN_11
#define ble_irq_GPIO_Port GPIOD

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
