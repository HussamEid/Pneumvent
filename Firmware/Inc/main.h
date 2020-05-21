/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32f4xx_hal.h"

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
#define LUNG_PRESSURE_Pin GPIO_PIN_4
#define LUNG_PRESSURE_GPIO_Port GPIOA
#define TANK_PRESSURE_Pin GPIO_PIN_5
#define TANK_PRESSURE_GPIO_Port GPIOA
#define FLOW_SENSOR_2_Pin GPIO_PIN_6
#define FLOW_SENSOR_2_GPIO_Port GPIOA
#define FLOW_SENSOR_1_Pin GPIO_PIN_7
#define FLOW_SENSOR_1_GPIO_Port GPIOA
#define LED_DIAGNOSTIC_RED_Pin GPIO_PIN_12
#define LED_DIAGNOSTIC_RED_GPIO_Port GPIOB
#define LED_DIAGNOSTIC_GREEN_Pin GPIO_PIN_13
#define LED_DIAGNOSTIC_GREEN_GPIO_Port GPIOB
#define FAULT_LED_Pin GPIO_PIN_14
#define FAULT_LED_GPIO_Port GPIOB
#define FAULT_BUZZER_Pin GPIO_PIN_15
#define FAULT_BUZZER_GPIO_Port GPIOB
#define COMPRESSOR_SWITCH_Pin GPIO_PIN_8
#define COMPRESSOR_SWITCH_GPIO_Port GPIOD
#define EXPIRED_VALVE_Pin GPIO_PIN_9
#define EXPIRED_VALVE_GPIO_Port GPIOD
#define INSPIRED_VALVE_Pin GPIO_PIN_10
#define INSPIRED_VALVE_GPIO_Port GPIOD
#define AIR_VALVE_Pin GPIO_PIN_11
#define AIR_VALVE_GPIO_Port GPIOD
#define O2_VALVE_Pin GPIO_PIN_12
#define O2_VALVE_GPIO_Port GPIOD
#define UI_BUTTON1_Pin GPIO_PIN_9
#define UI_BUTTON1_GPIO_Port GPIOC
#define UI_BUTTON_2_Pin GPIO_PIN_8
#define UI_BUTTON_2_GPIO_Port GPIOA
#define UI_BUTTON_3_Pin GPIO_PIN_9
#define UI_BUTTON_3_GPIO_Port GPIOA
#define UI_BUTTON_4_Pin GPIO_PIN_10
#define UI_BUTTON_4_GPIO_Port GPIOA
#define UI_BUTTON_5_Pin GPIO_PIN_11
#define UI_BUTTON_5_GPIO_Port GPIOA
#define UI_BUTTON_6_Pin GPIO_PIN_12
#define UI_BUTTON_6_GPIO_Port GPIOA
#define LCD_RES_Pin GPIO_PIN_10
#define LCD_RES_GPIO_Port GPIOC
#define LCD_WR_Pin GPIO_PIN_11
#define LCD_WR_GPIO_Port GPIOC
#define LCD_RD_Pin GPIO_PIN_12
#define LCD_RD_GPIO_Port GPIOC
#define LCD_DB7_Pin GPIO_PIN_0
#define LCD_DB7_GPIO_Port GPIOD
#define LCD_DB6_Pin GPIO_PIN_1
#define LCD_DB6_GPIO_Port GPIOD
#define LCD_DB5_Pin GPIO_PIN_2
#define LCD_DB5_GPIO_Port GPIOD
#define LCD_DB4_Pin GPIO_PIN_3
#define LCD_DB4_GPIO_Port GPIOD
#define LCD_DB3_Pin GPIO_PIN_4
#define LCD_DB3_GPIO_Port GPIOD
#define LCD_DB2_Pin GPIO_PIN_5
#define LCD_DB2_GPIO_Port GPIOD
#define LCD_DB1_Pin GPIO_PIN_6
#define LCD_DB1_GPIO_Port GPIOD
#define LCD_DB0_Pin GPIO_PIN_7
#define LCD_DB0_GPIO_Port GPIOD
#define LCS2CD__Pin GPIO_PIN_5
#define LCS2CD__GPIO_Port GPIOB
#define LCD_CS2_Pin GPIO_PIN_6
#define LCD_CS2_GPIO_Port GPIOB
#define LCD_A0_Pin GPIO_PIN_7
#define LCD_A0_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
