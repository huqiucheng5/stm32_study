#include "stm32f10x.h"
#include "stm32f10x_gpio.h"

int main(void)
{
	
#if 0
	
	//��GPIOB�˿�ʱ��
	*(unsigned int *)0X40021018 |= ( 1 << 3 );
	
	//����IO��Ϊ���
	*(unsigned int *)0X40010C00 &= ~( (0x0f) << (4*0) );
	*(unsigned int *)0X40010C00 |= ( (1) << (4*0) );
	
	//����ODR�Ĵ���
	//*(unsigned int *)0X40010C0C &= ~((0x01) << 0);
	*(unsigned int *)0X40010C0C |= ((0x01) << 0);
	
	
#elif 0
	
	//��GPIOB�˿�ʱ��
	RCC_APB2ENR |= (1 << 3);
	
	//����IO��Ϊ���
	GPIOB_CRL &= ~( (0x0f) << (4*0) );
	GPIOB_CRL |= ( (1) << (4*0) );
	
	//����ODR�Ĵ���
	GPIOB_ODR &= ~(1 << 0);
	//GPIOB_ODR |= (1 << 0);
	
	
#elif 0

//��GPIOB�˿�ʱ��
	RCC->APB2ENR |= (1 << 3);
	
	//����IO��Ϊ���
	GPIOB->CRL &= ~( (0x0f) << (4*0) );
	GPIOB->CRL |= ( (1) << (4*0) );
	
	//����ODR�Ĵ���
	GPIOB->ODR &= ~(1 << 0);
	//GPIOB->ODR |= (1 << 0);

#elif 1

	//��GPIOB�˿�ʱ��
	RCC->APB2ENR |= (1 << 3);
	
	//����IO��Ϊ���
	GPIOB->CRL &= ~( (0x0f) << (4*0) );
	GPIOB->CRL |= ( (1) << (4*0) );
	
	//����ODR�Ĵ���
	//GPIOB->ODR &= ~(1 << 0);
	//GPIOB->ODR |= (1 << 0);
	//GPIO_SetBits(GPIOB, GPIO_Pin_0);
	GPIO_ResetBits(GPIOB, GPIO_Pin_0);

#endif
}

void SystemInit(void)
{
	
		
}

