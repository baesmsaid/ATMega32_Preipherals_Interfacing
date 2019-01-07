/*
 * SPI_config.h
 *
 *  Created on: May 2, 2018
 *      Author: MuhammadElzeiny
 */

#ifndef SYSTEM_COTS_MCAL_SPI_SPI_CONFIG_H_
#define SYSTEM_COTS_MCAL_SPI_SPI_CONFIG_H_

/********************************************/
/* choose mode from following				*/
/*		 SPI_MASTER_MODE    				*/
/* 		 SPI_SLAVE_MODE						*/
/********************************************/
#define SPI_MODE_SELECT_MASK		SPI_SLAVE_MODE

/********************************************/
/* SETUP: write			SAMPLE:read			*/
/* choose clock phase from following		*/
/*		 SPI_CLOCK_PHASE_SAMPLE_FIRST		*/
/* 		 SPI_CLOCK_PHASE_SETUP_FIRST		*/
/********************************************/
#define SPI_CLOCK_PHASE_MASK		SPI_CLOCK_PHASE_SETUP_FIRST

/********************************************/
/* choose clock polarity from following		*/
/*		 SPI_CLOCK_POLARITY_IDLE_HIGH		*/
/* 		 SPI_CLOCK_POLARITY_IDLE_LOW		*/
/********************************************/
#define SPI_CLOCK_POLARITY_MASK		SPI_CLOCK_POLARITY_IDLE_LOW

/********************************************/
/* choose clock rate from following			*/
/*		 SPI_CLOCK_RATE_DIV_4				*/
/* 		 SPI_CLOCK_RATE_DIV_16				*/
/*		 SPI_CLOCK_RATE_DIV_64				*/
/*		 SPI_CLOCK_RATE_DIV_128				*/
/********************************************/
#define SPI_CLOCK_RATE_MASK			SPI_CLOCK_RATE_DIV_4

/********************************************************/
/* choose Double rate options from the following		*/
/*		 SPI_ENABLE_DOUBLE_RATE							*/
/*		 SPI_DISABLE_DOUBLE_RATE						*/
/********************************************************/
#define SPI_DOUBLE_RATE_MASK		SPI_DISABLE_DOUBLE_RATE
#endif /* SYSTEM_COTS_MCAL_SPI_SPI_CONFIG_H_ */
