/* ********************************************************************************************************
AUTHOR  : AHMED SHERIF
MICRO   : STM32F401CCU6
LAYER   : MCAL
DRIVER  : NVIC_Driver
File    : CODE FILE
Version :1.0
********************************************************************************************************
*********************************************************/



/*******************************************   Includes    ***********************************************
 *********************************************************************************************************/
#include"../../LIB/STD_TYPES.h"
#include"../../LIB/BIT_MATHS.h"
#include"NVIC_interface.h"
#include"NVIC_private.h"
/***********************************************************************************************************
 **********************************************************************************************************/



/*******************************************   Global variables    ***********************************************
 *********************************************************************************************************/


u32 Global_u32setGroupPriority ;


/**********************************************************************************************************
 **********************************************************************************************************/



/*******************************************   APIS    ***********************************************
 *********************************************************************************************************/
 void NVIC_VInterruptSetEnable(u8 Copy_u8InterruptID)
 {
	 u8 Register     = Copy_u8InterruptID/Register_bits ;  // GET REGISTER ID
	 u8 BIT_NO       = Copy_u8InterruptID%Register_bits;
	 SET_BIT(NVIC->NVIC_ISER[Register], BIT_NO);
 }


 /***********************************************************************************************************
  **********************************************************************************************************/



 void NVIC_VInterruptClearEnable(u8 Copy_u8InterruptID){
	 u8 Register     = Copy_u8InterruptID/Register_bits ;  // GET REGISTER ID
	 u8 BIT_NO       = Copy_u8InterruptID%Register_bits;
	 SET_BIT(NVIC->NVIC_ICER[Register], BIT_NO);
 }

 /***********************************************************************************************************
  **********************************************************************************************************/



 void MNVIC_SetGroupMode(Group_mode  COPY_GROUPMODE)
 {
	 u32 Global_u32setGroupPriority = MNVIC_VECTKEY | 	( COPY_GROUPMODE << 8);
     AIRCR = Global_u32setGroupPriority;
 }

 /***********************************************************************************************************
  **********************************************************************************************************/




 void MNVIC_vSetInterruptPeriority (u8 Copy_u8InterruptID, u8 Copy_GroupId,u8 Copy_SubGroupId)
 {
	 switch(Global_u32setGroupPriority)
	 {
		 case MNVIC_G16_SG0:NVIC->NVIC_IPR[Copy_u8InterruptID] |= (Copy_GroupId<<4);break;
		 case MNVIC_G8_SG2:NVIC->NVIC_IPR[Copy_u8InterruptID] |= (Copy_GroupId<<5);NVIC->NVIC_IPR[Copy_u8InterruptID] = (Copy_SubGroupId<<4); break;
		 case MNVIC_G4_SG4:NVIC->NVIC_IPR[Copy_u8InterruptID] |= (Copy_GroupId<<6);NVIC->NVIC_IPR[Copy_u8InterruptID] = (Copy_SubGroupId<<4); break;
		 case MNVIC_G2_SG8:NVIC->NVIC_IPR[Copy_u8InterruptID] |= (Copy_GroupId<<7);NVIC->NVIC_IPR[Copy_u8InterruptID] = (Copy_SubGroupId<<4); break;
		 case MNVIC_G0_SG16: NVIC->NVIC_IPR[Copy_u8InterruptID] |= (Copy_GroupId<<7);NVIC->NVIC_IPR[Copy_u8InterruptID] = (Copy_SubGroupId<<4);break;
	 }


 }
