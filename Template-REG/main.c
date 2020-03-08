#include "stm32f10x.h"

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
	
	
#else
	
	//��GPIOB�˿�ʱ��
	RCC_APB2ENR |= (1 << 3);
	
	//����IO��Ϊ���
	GPIOB_CRL |= ( (1) << (4*0) );
	
	//����ODR�Ĵ���
	GPIOB_ODR &= ~(1 << 0);
	
	
#endif
}

void SystemInit(void)
{
	
		
}

