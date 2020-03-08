#ifndef __STM32F10X_GIPO_H
#define __STM32F10X_GIPO_H

#include "stm32f10x.h"

#define GPIO_Pin_0			((uint16_t)0x0001)
#define GPIO_Pin_1			((uint16_t)0x0002)
#define GPIO_Pin_2			((uint16_t)0x0004)
#define GPIO_Pin_3			((uint16_t)0x0008)
#define GPIO_Pin_4			((uint16_t)0x0010)
#define GPIO_Pin_5			((uint16_t)0x0020)
#define GPIO_Pin_6			((uint16_t)0x0040)
#define GPIO_Pin_7			((uint16_t)0x0080)
#define GPIO_Pin_8			((uint16_t)0x0100)
#define GPIO_Pin_9			((uint16_t)0x0200)
#define GPIO_Pin_10			((uint16_t)0x0400)
#define GPIO_Pin_11			((uint16_t)0x0800)
#define GPIO_Pin_12			((uint16_t)0x1000)
#define GPIO_Pin_13			((uint16_t)0x2000)
#define GPIO_Pin_14			((uint16_t)0x4000)
#define GPIO_Pin_15			((uint16_t)0x8000)
#define GPIO_Pin_All		((uint16_t)0xFFFF)


typedef enum
{
	GPIO_Speed_10MHZ		1;
	GPIO_Speed_2MHZ		  2;
	GPIO_Speed_50MHZ		3;
}

typedef struct
{
	uint16_t GPIO_Pin;
	uint16_t GPIO_Speed;
	uint16_t GPIO_Mode;
}GPIO_InitTypeDef;


void GPIO_SetBits(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);
void GPIO_ResetBits(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);

#endif /* __STM32F10X_GIPO_H */

