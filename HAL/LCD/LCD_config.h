#ifndef _LCD_CONFIG_H
#define _LCD_CONFIG_H
/*
 * choose pins numbers between
 * LCD_MODE_PINS_4
 * LCD_MODES_PINS_8
 * */
#define LCD_MODE_PINS_NO			LCD_MODE_PINS_4

#define LCD_u8_DATA_PIN_0 DIO_PIN_D0
#define LCD_u8_DATA_PIN_1 DIO_PIN_D1
#define LCD_u8_DATA_PIN_2 DIO_PIN_D2
#define LCD_u8_DATA_PIN_3 DIO_PIN_D3
#define LCD_u8_DATA_PIN_4 DIO_PIN_D4
#define LCD_u8_DATA_PIN_5 DIO_PIN_D5
#define LCD_u8_DATA_PIN_6 DIO_PIN_D6
#define LCD_u8_DATA_PIN_7 DIO_PIN_D7


#define LCD_u8_RS_PIN 	DIO_PIN_C0
#define LCD_u8_RW_PIN 	DIO_PIN_C1
#define LCD_u8_E_PIN 	DIO_PIN_C2

#endif
