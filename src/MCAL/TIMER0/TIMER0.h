/*
 * TIMER0.h
 *
 *  Created on: Nov 3, 2018
 *      Author: Mostafa
 */

#ifndef MCAL_TIMER0_TIMER0_H_
#define MCAL_TIMER0_TIMER0_H_

void TIMER0_init(void);
void TIMER0_enInterrupt(void);
void TIMER0_diInterrupt(void);
void TIMER0_setCallBackFunc(void(*funcPtr)(void));

#endif /* MCAL_TIMER0_TIMER0_H_ */
