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
#endif
