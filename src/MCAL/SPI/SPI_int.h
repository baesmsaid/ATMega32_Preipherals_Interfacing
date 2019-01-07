/*
 * SPI_int.h
 *
 *  Created on: May 2, 2018
 *      Author: MuhammadElzeiny
 */

#ifndef SYSTEM_COTS_MCAL_SPI_SPI_INT_H_
#define SYSTEM_COTS_MCAL_SPI_SPI_INT_H_



void SPI_voidInitialize(void);
void SPI_voidEnableInterrupt(void);
void SPI_voidDisableInterrupt(void);
u8 SPI_voidStartTransmission(u8 TransmittedData);

#endif /* SYSTEM_COTS_MCAL_SPI_SPI_INT_H_ */
