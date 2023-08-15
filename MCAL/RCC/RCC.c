#include <STD_TYPES.h>
#include <BIT_MATHS.h>
#include <RCC_private.h>
#include <RCC_Interface.h>
#include <RCC_config.h>

void RCC_voidInit(void){
	/*************HSI**************/
#if RCC_SYSCLK==RCC_HSI
	SET_BIT(RCC->RCC_CR,0); //enable HSI CLK
	while(GET_BIT(RCC->RCC_CR,1)==0); //waiting HSIRDY
	CLEAR_BIT(RCC->RCC_CFGR,1);
	CLEAR_BIT(RCC->RCC_CFGR,0);
	/*************HSE**************/
#elif RCC_SYSCLK==RCC_HSE

	#if RCC_HSE_MODE ==RCC_HSE_BYPASS
		SET_BIT(RCC->RCC_CR,18);
	#elif RCC_HSE_MODE ==RCC_HSE_CYRSTAL
		CLEAR_BIT(RCC->RCC_CR,18);
	#endif
		SET_BIT(RCC->RCC_CR,16);// enable HSE CLK

	while(GET_BIT(RCC->RCC_CR,17)==0);
	SET_BIT(RCC->RCC_CFGR,0);
	CLEAR_BIT(RCC->RCC_CFGR,1);
	/*************PLL**************/
#elif RCC_SYSCLK==RCC_PLL
	#ifdef RCC_PLL_HSE
		SET_BIT(RCC->RCC_PLLCFGR,22);//select HSE
	#elif
		CLEAR_BIT(RCC->RCC_PLLCFGR,22);//select HSI
	#endif
	SET_BIT(RCC->RCC_PLLCFGR,16);//Set division factor for main SYSCLK to 4
	SET_BIT(RCC->RCC_CR,24); //enable PLL CLK
	while(GET_BIT(RCC->RCC_CR,25)==0);// wait until PLL is Ready
	SET_BIT(RCC->RCC_CFGR,1); //PLL selected as system clock

#else

	#error "Wrong Clock Source mode"

#endif
}

void RCC_voidEnablePeriphral(u8 Copyu8PerNum, u8 Copyu8BUSNum)
{
	switch(Copyu8BUSNum)
	{
	case RCC_u8_AHB1_BUS:
		SET_BIT(RCC->RCC_AHB1ENR, Copyu8PerNum);
		break;
	case RCC_u8_AHB2_BUS:
		SET_BIT(RCC->RCC_AHB2ENR, Copyu8PerNum);
		break;
	case RCC_u8_APB1_BUS:
		SET_BIT(RCC->RCC_APB1ENR, Copyu8PerNum);
		break;
	case RCC_u8_APB2_BUS:
		SET_BIT(RCC->RCC_APB2ENR, Copyu8PerNum);
		break;

	}
}

void RCC_voidDisablePeriphral(u8 Copyu8PerNum, u8 Copyu8BUSNum)
{
	switch(Copyu8BUSNum)
	{
	case RCC_u8_AHB1_BUS : CLEAR_BIT(RCC->RCC_AHB1ENR,Copyu8PerNum); break;
	case RCC_u8_AHB2_BUS : CLEAR_BIT(RCC->RCC_AHB2ENR,Copyu8PerNum); break;
	case RCC_u8_APB1_BUS : CLEAR_BIT(RCC->RCC_APB1ENR,Copyu8PerNum); break;
	case RCC_u8_APB2_BUS : CLEAR_BIT(RCC->RCC_APB2ENR,Copyu8PerNum); break;

	}
}
