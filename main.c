
/*
 * main.c
 *
 * Created: 15/8/2021 10:50:38 PM
 *  Author: AHMED ELMASRY & MOHAMED EMAD
 */


#include "UART.h"
#include "InOut.h"
#include "LED.h"
#include "LCD.h"
#include "SPI.h"
uint8_t Z =0;
uint8_t X =0;
uint8_t Y =0;
int main(void)
	
{	LED0_Initialization();
	LED1_Initialization();
	LED2_Initialization();
	Relay_Initialization();
	Buzzer_Initialization();
	LCD_Initialization();
	UART_Init(); 
	LCD_String("Smart Home");
	SPI_Init();
	
	char data;

	while(1)
	
{  
	data = SPI_Receive();
		
		if(data == '1')
		{
			if(X%2 == 0){
				
				LCD_Clear();
				LCD_String("led 1 ON");
				LED0_TGL();
				buzzer_ring();
			}
			else{
				
				LCD_Clear();
				LCD_String("led 1 OFF ");
				LED0_TGL();
				buzzer_ring();
			}
			X++;
		}
		
		else if(data == '2')
		{
			if(Y%2 == 0){
				
				LCD_Clear();
				LCD_String("led 2 ON");
				LED1_TGL();
				buzzer_ring();
			}
			else{
				
				LCD_Clear();
				LCD_String("led 2 OFF ");
				LED1_TGL();
				buzzer_ring();
			}
			Y++;
		}
		
		else if(data == '3')
		{
			if(Z%2 == 0){
				
				LCD_Clear();
				LCD_String("led 3 ON");
				LED2_TGL();
				buzzer_ring();
			}
			else{
				
				LCD_Clear();
				LCD_String("led 3 OFF ");
				LED2_TGL();
				buzzer_ring();
			}
			Z++;
		}
		
}
}




