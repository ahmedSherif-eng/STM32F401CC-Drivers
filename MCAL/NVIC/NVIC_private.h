#ifndef	NVIC_PRIVATE_H
#define	NVIC_PRIVATE_H
	#define NVIC_BASE_ADDRESS	0xE000E100
	#include<STD_TYPES.h>
	typedef struct{
		volatile u32 NVIC_ISER[8];
		volatile u32 RESERVED1[24];
		volatile u32 NVIC_ICER[8];
		volatile u32 RESERVED2[24];
		volatile u32 NVIC_ISPR[8];
		volatile u32 RESERVED3[24];
		volatile u32 NVIC_ICPR[8];
		volatile u32 RESERVED4[24];
		volatile u32 NVIC_IABR[8];
		volatile u32 RESERVED5[56];
		volatile u8 NVIC_IPR[240];
		volatile u32 RESERVED6[580];
		volatile u32	STIR;
	}NVIC_T;
	#define NVIC	((NVIC_T *)(NVIC_BASE_ADDRESS))
	#define Register_bits	32
	#define MNVIC_VECTKEY	0x5fa00000
	#define AIRCR    (*(volatile u32 *)0xE000ED0c)
#endif
