/*
 * SPI_reg.h
 *
 *  Created on: May 2, 2018
 *      Author: MuhammadElzeiny
 */

#ifndef SYSTEM_COTS_MCAL_SPI_SPI_REG_H_
#define SYSTEM_COTS_MCAL_SPI_SPI_REG_H_

#define SPDR			*((volatile u8*)0x2F)
#define	SPSR			*((volatile u8*)0x2E)
#define	SPCR			*((volatile u8*)0x2D)

/*bits in SPCR register*/
#define SPIE			7
#define SPE				6

/*bits in SPSR*/
#define SPIF			7
#endif /* SYSTEM_COTS_MCAL_SPI_SPI_REG_H_ */
