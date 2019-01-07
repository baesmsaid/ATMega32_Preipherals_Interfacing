/*
 * SPI_prog.c
 *
 *  Created on: May 2, 2018
 *      Author: MuhammadElzeiny
 */
#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"
#include "SPI_reg.h"
#include "SPI_priv.h"
#include "SPI_config.h"
#include "SPI_int.h"

void SPI_voidInitialize(void)
{


	/*configure spi mode master/slave */
	SPCR &= SPI_MODE_CLEAR;
	SPCR |= SPI_MODE_SELECT_MASK;

	/*configure clock polarity(Idl:high/low) -> by default low*/
	SPCR &= SPI_CLOCK_POLARITY_CLEAR;
	SPCR |= SPI_CLOCK_POLARITY_MASK;

	/*configure clock phase*/
	SPCR &= SPI_CLOCK_PHASE_CLEAR;
	SPCR |= SPI_CLOCK_PHASE_MASK;

	/*configure clock rate*/
	SPCR &= SPI_CLOCK_RATE_CLEAR;
	SPCR |= SPI_CLOCK_RATE_MASK;

	/*configure double rate option*/
	SPSR &= SPI_DOUBLE_RATE_CLEAR;
	SPSR |= SPI_DOUBLE_RATE_MASK;

	/*enable SPI operations*/
	SET_BIT(SPCR,SPE);

}
void SPI_voidEnableInterrupt(void)
{
	/*enable interrupt*/
	SET_BIT(SPCR,SPIE);
}

void SPI_voidDisableInterrupt(void)
{
	/*disable interrupt*/
	CLR_BIT(SPCR,SPIE);
}

u8 SPI_voidStartTransmission(u8 TransmittedData)
{
	SPDR= TransmittedData;
	while(GET_BIT(SPSR,SPIF)==0);
	return SPDR;
}
