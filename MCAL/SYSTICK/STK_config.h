/*
AUTHOR  : AHMED SHERIF
MICRO   : STM32F401CCU6
LAYER   : MCAL
DRIVER  : SYSTICK
File    : SYSTICK_config.h
Version : 1.0
********************************************************************************************************
*********************************************************/
#ifndef MCAL_SYSTICK_STK_CONFIG_H_
#define MCAL_SYSTICK_STK_CONFIG_H_

/*
 *  CLK_SOURCE options
 *	 CLK_AHB
 *	 CLK_AHB/8
 */
#define CLK_SOURCE  CLK_AHB



/*
 * INTERRUPT_STATE options
 * INT
 * NO_INT
 */
#define INTERRUPT_STATE	INT


/*
 * F_CPU
 */

#define F_CPU  8000000UL

#endif /* MCAL_SYSTICK_STK_CONFIG_H_ */



/************************************************END OF FILE ********************************************************
 *********************************************************************************************************/
