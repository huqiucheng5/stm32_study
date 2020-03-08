#include "stm32f10x.h"

int main(void)
{
	
#if 0
	
	//打开GPIOB端口时钟
	*(unsigned int *)0X40021018 |= ( 1 << 3 );
	
	//配置IO口为输出
	*(unsigned int *)0X40010C00 &= ~( (0x0f) << (4*0) );
	*(unsigned int *)0X40010C00 |= ( (1) << (4*0) );
	
	//控制ODR寄存器
	//*(unsigned int *)0X40010C0C &= ~((0x01) << 0);
	*(unsigned int *)0X40010C0C |= ((0x01) << 0);
	
	
#else
	
	//打开GPIOB端口时钟
	RCC_APB2ENR |= (1 << 3);
	
	//配置IO口为输出
	GPIOB_CRL |= ( (1) << (4*0) );
	
	//控制ODR寄存器
	GPIOB_ODR &= ~(1 << 0);
	
	
#endif
}

void SystemInit(void)
{
	
		
}

