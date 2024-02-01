/*
 * lookuptable.h
 *
 *  Created on: Jan 17, 2024
 *      Author: alexd
 */

#ifndef INC_LOOKUPTABLE_H_
#define INC_LOOKUPTABLE_H_
#include "stdint.h"
#include "stm32f1xx_hal.h"


#define SEG_A_Pin GPIO_PIN_5
#define SEG_A_GPIO_Port GPIOA
#define SEG_B_Pin GPIO_PIN_6
#define SEG_B_GPIO_Port GPIOA
#define SEG_C_Pin GPIO_PIN_7
#define SEG_C_GPIO_Port GPIOA
#define SEG_D_Pin GPIO_PIN_8
#define SEG_D_GPIO_Port GPIOA
#define SEG_E_Pin GPIO_PIN_9
#define SEG_E_GPIO_Port GPIOA
#define SEG_F_Pin GPIO_PIN_0
#define SEG_F_GPIO_Port GPIOC
#define SEG_G_Pin GPIO_PIN_1
#define SEG_G_GPIO_Port GPIOC
#define SEG_COM_Pin GPIO_PIN_0
#define SEG_COM_GPIO_Port GPIOB


void seven_segment_right(uint8_t value);

#endif /* INC_LOOKUPTABLE_H_ */
