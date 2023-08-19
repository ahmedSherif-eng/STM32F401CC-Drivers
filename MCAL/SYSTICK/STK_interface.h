/*
AUTHOR  : AHMED SHERIF
MICRO   : STM32F401CCU6
LAYER   : MCAL
DRIVER  : SYSTICK
File    : SYSTICK_interface.h
Version : 1.0
********************************************************************************************************
*********************************************************/
#ifndef MCAL_SYSTICK_STK_INTERFACE_H_
#define MCAL_SYSTICK_STK_INTERFACE_H_




/*Func STK_voidInit
 * Description: Initialize Systick clock and interrupt mode
 * I/P arguments: void
 *
 *
 *
 *				return:void
 *
 *
 */
void STK_voidInit(void);



/*Func STK_voidStart
 * Description: starts the count of Systick
 * I/P arguments:
 * 				copy_u32Load_Value :specifies the required count of ticks If we need 100 ticks we pass 99
 *
 *
 *
 *				return:void
 *
 *
 */
void STK_voidStart(u32 copy_u32Load_Value);



/*Func STK_u32ElapsedTime
 * Description: returns the elapsed time of the count in terms of tick
 * I/P arguments: void
 *
 *
 *
 *				return:elapsed counts
 *
 *
 */
u32  STK_u32ElapsedTime(void);



/*Func STK_u32RemainingTime
 * Description: Returns the remaining time to reach 0
 * I/P arguments: void
 *
 *
 *				return:Remainig counts
 *
 *
 */
u32  STK_u32RemainingTime(void);


/*Func STK_u8ReadFlag
 * Description: Reads the flag of systick, if it reads as 1 means the val register reached 0(complete counts)
 * 				if it reads as 0 means the val register has not reached 0 yet
 * I/P arguments:void
 *
 *
 *
 *				return:flag value
 *
 *
 */
u8	 STK_u8ReadFlag(void);


/*Func STK_voidTimeDelay_ms
 * Description: make delay in milliseconds
 * I/P arguments:
 * 				copy_u32Delay_ms: delay value in ms
 *
 *
 *
 *				return:void
 *
 *
 */
void STK_voidTimeDelay_ms(u32 copy_u32Delay_ms);


/*Func STK_voidTimeDelay_ms
 * Description: make delay in MicroSeconds
 * I/P arguments:
 * 				copy_u32Delay_ms: delay value in us
 *
 *
 *
 *				return:void
 *
 *
 */
void STK_voidTimeDelay_us(u32 copy_u32Delay_us);


#endif /* MCAL_SYSTICK_STK_INTERFACE_H_ */



/************************************************END OF FILE ********************************************************
 *********************************************************************************************************/
