/*
AUTHOR  : AHMED SHERIF
MICRO   : STM32F401CCU6
LAYER   : MCAL
DRIVER  : EXRTERNAL INTTERUPT
File    :  ExInt_private.h
Version :1.0
********************************************************************************************************
*********************************************************/


#ifndef MCAL_EXINT_EXINT_PRIVATE_H_
#define MCAL_EXINT_EXINT_PRIVATE_H_
	typedef struct{
		volatile u32 IMR   ;
		volatile u32 EMR   ;
		volatile u32 RTSR  ;
		volatile u32 FTSR  ;
		volatile u32 SWIER ;
		volatile u32 PR	;
	}ExInt_t;
	typedef struct{
		volatile u32 reserverd[2];
		volatile u32 EXTICR[4]   ;
	}SYSCFG_t;
	#define EXINT_BASE_ADDRESS	0X40013C00
	#define EXINT	((ExInt_t *)EXINT_BASE_ADDRESS)
	#define SYSCFG_BASE_ADDRESS 	0X40013800
	#define SYSCFG  ((SYSCFG_t *)SYSCFG_BASE_ADDRESS)
#endif /* MCAL_EXINT_EXINT_PRIVATE_H_ */
