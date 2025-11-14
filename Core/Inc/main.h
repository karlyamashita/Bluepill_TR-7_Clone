/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
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
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <errno.h>
#include <ctype.h>
#define Nop() asm(" NOP ")

// most commonly used. Uncomment if needed.
#include "AlpineBypass.h"
#include "ErrorStatus.h"
#include "GPIO_Handler.h"
#include "Low_Voltage_Trigger.h"
#include "ProgrammingMode.h"
#include "RingBuffer.h"
#include "RunMode.h"
#include "StringManip.h"
#include "TimerCallback.h"
#include "USB_CDC_Buffer.h"

#include "PollingRoutine.h"


extern USB_CDC_MsgStruct usb_msg;
extern TimerCallbackStruct timerCallback;
extern RunMode_t run_mode;



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
#define LED_GREEN_Pin GPIO_PIN_13
#define LED_GREEN_GPIO_Port GPIOC
#define OUTPUT_1_Pin GPIO_PIN_12
#define OUTPUT_1_GPIO_Port GPIOB
#define OUTPUT_2_Pin GPIO_PIN_13
#define OUTPUT_2_GPIO_Port GPIOB
#define PROGRAMMING_Pin GPIO_PIN_7
#define PROGRAMMING_GPIO_Port GPIOB
#define INPUT_1_Pin GPIO_PIN_8
#define INPUT_1_GPIO_Port GPIOB
#define INPUT_1_EXTI_IRQn EXTI9_5_IRQn
#define INPUT_2_Pin GPIO_PIN_9
#define INPUT_2_GPIO_Port GPIOB
#define INPUT_2_EXTI_IRQn EXTI9_5_IRQn

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
