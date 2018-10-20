/*TODO: define other PORTS start,End and size to use them later in DIO_prog.c*/
#define DIO_u8_PORTA_START 0
#define DIO_u8_PORTA_END 7
#define DIO_u8_PORTA_OFFSET 0

#define DIO_u8_PORTB_START 8
#define DIO_u8_PORTB_END 15
#define DIO_u8_PORTB_OFFSET 8

#define DIO_u8_PORTC_START 16
#define DIO_u8_PORTC_END 23
#define DIO_u8_PORTC_OFFSET 16

#define DIO_u8_PORTD_START 24
#define DIO_u8_PORTD_END 31
#define DIO_u8_PORTD_OFFSET 24


/*TODO 1: concatenate PORTB, C and D bits that defined in configuration file*/
#define DIO_u8_PORTA_DIRECTION BIT_CONC(DIO_u8_PIN_DIR_7, DIO_u8_PIN_DIR_6, DIO_u8_PIN_DIR_5, DIO_u8_PIN_DIR_4, DIO_u8_PIN_DIR_3, DIO_u8_PIN_DIR_2, DIO_u8_PIN_DIR_1, DIO_u8_PIN_DIR_0)
