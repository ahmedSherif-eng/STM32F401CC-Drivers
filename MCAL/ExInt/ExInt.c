/*AUTHOR  : AHMED SHERIF
MICRO   : STM32F401CCU6
LAYER   : MCAL
DRIVER  : EXRTERNAL INTTERUPT
File    : ExInt.c
Version :1.0
********************************************************************************************************
*********************************************************/


/*******************************************   Includes    ***********************************************
 *********************************************************************************************************/

#include"../../LIB/STD_TYPES.h"
#include"../../LIB/BIT_MATHS.h"
#include"ExInt_private.h"
#include"ExInt_interface.h"

/********************************************************************************************************
*********************************************************/





/*******************************************   APIS    ***********************************************
 *********************************************************************************************************/



void ExInt_voidEnable(ExInt_PORT_t copy_Port,ExInt_LINE_t copy_Line, ExINT_Trigger_t copy_Trigger){
	u8 registerNumber= copy_Line/4 ;
	u8 bitNumber= (copy_Line%4)*4  ;
	SYSCFG->EXTICR[registerNumber]&=~(0xF<<bitNumber);
	SYSCFG->EXTICR[registerNumber]|= ((copy_Port|0X0)<<bitNumber);
	if(copy_Trigger==ExInt_risingEdge){
		SET_BIT(EXINT->RTSR,copy_Line);
	}
	else if(copy_Trigger==ExInt_fallingEdge)
	{
		SET_BIT(EXINT->FTSR,copy_Line);
	}
	else if(copy_Trigger==ExInt_edgeTrigger)
	{
		SET_BIT(EXINT->RTSR,copy_Line);
		SET_BIT(EXINT->FTSR,copy_Line);
	}
	SET_BIT(EXINT->IMR,copy_Line);
}
/********************************************************************************************************
*********************************************************/



void ExInt_voidDisable(ExInt_LINE_t copy_Line){
		CLEAR_BIT( EXINT->IMR , copy_Line );
}


/*******************************************   END OF FILE    ***********************************************
 *********************************************************************************************************/

