/*
 * _lab_04_SevSegmentsMux.c
 *
 * Created: 10/20/2018 7:03:52 PM
 *  Author: MuhammadElzeiny
 */ 
#include <util/delay.h>
#include "../Lib/STD_TYPES.h"
#include "../MCAL/DIO/DIO.h"
#include "../HAL/SevSegments/SevSegments.h"

#define ENABLE_SEVSEGMENTS_1()			DIO_setPinValue(DIO_PIN_D0,DIO_Pin_low)
#define DISABLE_SEVSEGMENTS_1()			DIO_setPinValue(DIO_PIN_D0,DIO_Pin_high)

#define ENABLE_SEVSEGMENTS_2()			DIO_setPinValue(DIO_PIN_D1,DIO_Pin_low)
#define DISABLE_SEVSEGMENTS_2()			DIO_setPinValue(DIO_PIN_D1,DIO_Pin_high)

void _Lab_04(void)
{
	u8 i;
	u16 loop;
	DIO_init();
	
	while(1)
	{
		for(i=0;i<100;)
		{	

			for(loop=0;loop<50;loop++)
			{
				DISABLE_SEVSEGMENTS_2();
				ENABLE_SEVSEGMENTS_1();
				SevSegments_displayNo(i%10);
				_delay_ms(10);
			
				DISABLE_SEVSEGMENTS_1();
				ENABLE_SEVSEGMENTS_2();
				SevSegments_displayNo(i/10);
				_delay_ms(10);
				
			}
			
		}
		
	}
}
