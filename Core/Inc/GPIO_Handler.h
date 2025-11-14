/*
 * GPIO_Handler.h
 *
 *  Created on: Nov 13, 2025
 *      Author: karl.yamashita
 */

#ifndef INC_GPIO_HANDLER_H_
#define INC_GPIO_HANDLER_H_


typedef struct
{
	GPIO_PinState input_1;
	GPIO_PinState input_2;
}GPIO_Pin_t;


int GPIO_EXTI_Handler(uint16_t GPIO_Pin);

GPIO_PinState GPIO_Programming_Pin_Status(void);
void GPIO_Programming_Check(void);

#endif /* INC_GPIO_HANDLER_H_ */
