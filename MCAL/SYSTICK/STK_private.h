/*
AUTHOR  : AHMED SHERIF
MICRO   : STM32F401CCU6
LAYER   : MCAL
DRIVER  : SYSTICK
File    : SYSTICK_private.h
Version : 1.0
********************************************************************************************************
*********************************************************/
#ifndef MCAL_SYSTICK_STK_PRIVATE_H_
#define MCAL_SYSTICK_STK_PRIVATE_H_
	typedef struct{
		u32	CTRL;
		u32	LOAD;
		u32	VAL ;
		u32	CALIB;
	}STK_T;
	#define STK_BASE_ADDRESS 0xE000E010
	#define STK ((volatile STK_T *)STK_BASE_ADDRESS)
	#define CLKSOURCE   2
	#define COUNTFLAG   16
	#define TICKINT     1
	#define ENABLE		0
#endif /* MCAL_SYSTICK_STK_PRIVATE_H_ */





/************************************************END OF FILE ********************************************************
 *********************************************************************************************************/
