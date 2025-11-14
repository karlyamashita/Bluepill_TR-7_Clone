/*
 * IRQ_Handler.c
 *
 *  Created on: Nov 13, 2025
 *      Author: karl.yamashita
 */


#include "main.h"


// override
void HAL_SYSTICK_Callback(void)
{
	TimerCallbackTick(&timerCallback);
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
	GPIO_EXTI_Handler(GPIO_Pin);
}
