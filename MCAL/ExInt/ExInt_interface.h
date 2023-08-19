/* ********************************************************************************************************
AUTHOR  : AHMED SHERIF
MICRO   : STM32F401CCU6
LAYER   : MCAL
DRIVER  : EXRTERNAL INTTERUPT
File    : INTERFACE FILE
Version :1.0
********************************************************************************************************
*********************************************************/

#ifndef MCAL_EXINT_EXINT_INTERFACE_H_
#define MCAL_EXINT_EXINT_INTERFACE_H_





/*******************************************   ENUMS    ***********************************************
 *********************************************************************************************************/

	typedef enum{
		ExInt_risingEdge=0 ,
		ExInt_fallingEdge  ,
		ExInt_edgeTrigger

	}ExINT_Trigger_t;
	typedef enum{
		ExInt_LINE0=0  ,
		ExInt_LINE1  ,
		ExInt_LINE2  ,
		ExInt_LINE3  ,
		ExInt_LINE4  ,
		ExInt_LINE5  ,
		ExInt_LINE6  ,
		ExInt_LINE7  ,
		ExInt_LINE8  ,
		ExInt_LINE9  ,
		ExInt_LINE10 ,
		ExInt_LINE11 ,
		ExInt_LINE12 ,
		ExInt_LINE13 ,
		ExInt_LINE14 ,
		ExInt_LINE15 ,
	}ExInt_LINE_t;

	typedef enum{
		ExInt_PORTA=0 ,
		ExInt_PORTB ,
		ExInt_PORTC
	}ExInt_PORT_t;
	/********************************************************************************************************
	*********************************************************/





	/*
	 return type = void
	 input parameters = Port, Line, Trigger
	 functionality : Enable External interrupts on specified port and pin with the selected trigger
	 */
	void ExInt_voidEnable(ExInt_PORT_t copy_Port,ExInt_LINE_t copy_Line, ExINT_Trigger_t copy_Trigger);



	/*
	 return type = void
	 input parameters = Line
	 functionality : Disable External interrupts on specified port and Line
	 */
	void ExInt_voidDisable(ExInt_LINE_t copy_Line);

#endif /* MCAL_EXINT_EXINT_INTERFACE_H_ */
