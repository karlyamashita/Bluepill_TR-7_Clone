/*
 * GPIO_Handler.c
 *
 *  Created on: Nov 13, 2025
 *      Author: karl.yamashita
 */

#include "main.h"


GPIO_Pin_t gpio_pin = {0};


int GPIO_EXTI_Handler(uint16_t GPIO_Pin)
{
	int status = NO_ERROR;

	if(GPIO_Pin == INPUT_1_Pin)
	{
		gpio_pin.input_1 = HAL_GPIO_ReadPin(INPUT_1_GPIO_Port, INPUT_1_Pin);
	}
	else if(GPIO_Pin == INPUT_2_Pin)
	{
		gpio_pin.input_2 = HAL_GPIO_ReadPin(INPUT_2_GPIO_Port, INPUT_2_Pin);
	}

	return status;
}

GPIO_PinState GPIO_Programming_Pin_Status(void)
{
	return HAL_GPIO_ReadPin(PROGRAMMING_GPIO_Port, PROGRAMMING_Pin);
}

void GPIO_Programming_Check(void)
{
	if(GPIO_Programming_Pin_Status() == GPIO_PIN_RESET)
	{
		ProgrammingMode();
	}
}
