/*
 **********************RCC_PRIVATE*****************************
 *
 */

#ifndef RCC_PRIVATE_H_
#define RCC_PRIVATE_H_


typedef struct
{
	volatile u32 RCC_CR 		;
	volatile u32 RCC_PLLCFGR	;
	volatile u32 RCC_CFGR		;
	volatile u32 RCC_CIR		;
	volatile u32 RCC_AHB1RSTR	;
	volatile u32 RCC_AHB2RSTR	;
	volatile u32 Reserved1     ;
	volatile u32 Reserved2     ;
	volatile u32 RCC_APB1RSTR  ;
	volatile u32 RCC_APB2RSTR  ;
	volatile u32 Reserved3		;
	volatile u32 Reserved4		;
	volatile u32 RCC_AHB1ENR	;
	volatile u32 RCC_AHB2ENR   ;
	volatile u32 Reserved5		;
	volatile u32 Reserved6		;
	volatile u32 RCC_APB1ENR	;
	volatile u32 RCC_APB2ENR	;
	volatile u32 Reserved7	;
	volatile u32 Reserved8	;
	volatile u32 RCC_AHB1LPENR;
	volatile u32 RCC_AHB2LPENR;
	volatile u32 Reserved9	;
	volatile u32 Reserved10	;
	volatile u32 RCC_APB1LPENR;
	volatile u32 RCC_APB2LPENR;
	volatile u32 Reserved11	;
	volatile u32 Reserved12	;
	volatile u32 RCC_BDCR		;
	volatile u32 RCC_CSR		;
	volatile u32 Reserved13	;
	volatile u32 Reserved14	;
	volatile u32 RCC_SSCGR	;
	volatile u32 RCC_PLLI2SCFGR;
	volatile u32 Reserved15	;
	volatile u32 RCC_DCKCFG	;



}RCC_T;


#define RCC_BASE	0x40023800

#define RCC		((RCC_T *)RCC_BASE)

#define RCC_HSI		0
#define RCC_HSE		1u
#define RCC_PLL		2

#define	RCC_HSE_BYPASS	1
#define	RCC_HSE_CRYSTAL	2



#endif /* RCC_PRIVATE_H_ */
