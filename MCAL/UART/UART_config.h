#ifndef UART_CONFIG_H
#define UART_CONFIG_H

#define UART_DATA_LENGTH	UART_DATA_LENGTH_8

/****************************************************/
/*	choose between the following to configure parity*/
/*			UART_PARITY_MODE_DISABLE				*/
/* 			UART_PARITY_MODE_EVEN					*/
/* 			UART_PARITY_MODE_ODD					*/
/****************************************************/
#define UART_PARITY_MODE_MASK	UART_PARITY_MODE_DISABLE

/*****************************************************************/
/*	choose between the following to configure number of stop bit*/
/*			UART_STOP_BIT_1_BIT								   */
/* 			UART_STOP_BIT_2_BIT						     	  */
/*************************************************************/
#define UART_STOP_BIT_MASK		UART_STOP_BIT_1_BIT

/*
 * determine received message buffer size
 *
 * */




#endif
