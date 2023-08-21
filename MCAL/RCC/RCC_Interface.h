#ifndef RCC_INTERFACE_H
#define RCC_INTERFACE_H
	#include"../../LIB/STD_TYPES.h"
	#include"../../LIB/BIT_MATHS.h"
	#include "RCC_private.h"
	#include "RCC_Interface.h"
	#include "RCC_config.h"
	void RCC_voidInit(void);
	void RCC_voidEnablePeriphral(u8 Copyu8PerNum, u8 Copyu8BUSNum);
	void RCC_voidDisablePeriphral(u8 Copyu8PerNum, u8 Copyu8BUSNum);
	#define RCC_u8_AHB1ENR_GPIOA	0
	#define RCC_u8_AHB1ENR_GPIOB	1
	#define RCC_u8_AHB1ENR_GPIOC	2
	#define RCC_u8_AHB1ENR_GPIOD	3
	#define RCC_u8_AHB1ENR_GPIOE	4
	#define RCC_u8_AHB1ENR_GPIOH	7
	#define RCC_u8_AHB1ENR_CRC		12
	#define RCC_u8_AHB1ENR_DMA1		21
	#define RCC_u8_AHB1ENR_DMA2		22




	#define  RCC_u8_AHB1_BUS			0
	#define  RCC_u8_AHB2_BUS			1
	#define  RCC_u8_APB1_BUS			2
	#define  RCC_u8_APB2_BUS			3
#endif
