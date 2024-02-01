/*
 * lookuptable.c
 *
 *  Created on: Jan 17, 2024
 *      Author: alexd
 */

#include "lookuptable.h"
#include "stm32f1xx_hal.h"



uint8_t seven_segment_lut[] =
{
	0x3F,	// 0
	0x6,	// 1
	0x5B, // 2
	0x4F,	// 3
	0x66,	// 4
	0x6D,	// 5
	0x7D,	// 6
	0x7, // 7
	0x7F, // 8
	0x6F, // 9
	0x77, // A
	0x7C, // b
	0x39, // C
	0x5E, // d
	0x79, // E
	0x71  // F
};


void seven_segment_right(uint8_t value)
{
	uint8_t code = seven_segment_lut[value];

	HAL_GPIO_WritePin(SEG_COM_GPIO_Port, SEG_COM_Pin, 0);

	HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, ((code >> 0) & 0x01));
	HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, ((code >> 1) & 0x01));
	HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, ((code >> 2) & 0x01));
	HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, ((code >> 3) & 0x01));
	HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, ((code >> 4) & 0x01));
	HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, ((code >> 5) & 0x01));
	HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, ((code >> 6) & 0x01));
}

void seven_segment_left(uint8_t value)
{
	uint8_t code = seven_segment_lut[value];
	code = code ^ 0xFF;

	HAL_GPIO_WritePin(SEG_COM_GPIO_Port, SEG_COM_Pin, 1);

	HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, ((code >> 0) & 0x01));
	HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, ((code >> 1) & 0x01));
	HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, ((code >> 2) & 0x01));
	HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, ((code >> 3) & 0x01));
	HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, ((code >> 4) & 0x01));
	HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, ((code >> 5) & 0x01));
	HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, ((code >> 6) & 0x01));
}
