/*
 * _Lab_05_LCD.c
 *
 *  Created on: Oct 21, 2018
 *      Author: MuhammadElzeiny
 */

#include "../Lib/STD_TYPES.h"
#include "../HAL/LCD/LCD.h"
#include "../MCAL/DIO/DIO.h"

void _Lab_05_LCD(void)
{

	DIO_init();
	LCD_init();
	while(1)
	{

		LCD_writeString("Hello",0,0);

	}

}
