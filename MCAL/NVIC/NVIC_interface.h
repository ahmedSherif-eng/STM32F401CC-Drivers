/* ********************************************************************************************************
AUTHOR  : AHMED SHERIF
MICRO   : STM32F401CCU6
LAYER   : MCAL
DRIVER  : NVIC_Driver
File    : INTERFACE FILE
Version :1.0
********************************************************************************************************
*********************************************************/

#ifndef NVIC_INTERFACE_H
#define	NVIC_INTERFACE_H
typedef enum
 {
	 MNVIC_G16_SG0 =3,
	 MNVIC_G8_SG2,
	 MNVIC_G4_SG4,
	 MNVIC_G2_SG8,
	 MNVIC_G0_SG16
 }Group_mode;
/*
 return type = void
 input parameters = interrupt id
 functionality : Enable External interrupts (Peripheral interrupts)
 */
void NVIC_VInterruptSetEnable(u8 Copy_u8InterruptID);

/*
 return type = void
 input parameters = interrupt id
 functionality : Disable External interrupts (Peripheral interrupts)
 */
void MNVIC_VInterruptClearEnable(u8 Copy_u8InterruptID);

/*
RETURN TYPE = VOID
INPUT PARAMETERS = u8 Copy_u8InterruptID, u8 Copy_GroupId,u8 Copy_SubGroupId
FUNCTIONALITY = Set Interrupt SW Priority
*/

void MNVIC_SetGroupMode(Group_mode  COPY_GROUPMODE);

#endif
