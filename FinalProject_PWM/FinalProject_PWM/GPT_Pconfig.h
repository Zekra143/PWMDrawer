/*
 * GPT_Pconfig.h
 *
 * Created: 31/1/2022
 *  Author: zuz
 */ 


#ifndef GPT_PCONFIG_H_
#define GPT_PCONFIG_H_

#define NUM_TIMERS_OPERATING				(1U)


/************************************************************************/
/*				Compiler Checks for Configurations                      */
/************************************************************************/
#if NUM_TIMERS_OPERATING > 3
	#pragma GCC error "There are only 3 timers in ATmega32A! Fix NUM_TIMERS_OPERATING to be of maximum 3."
#endif

#endif /* GPT_PCONFIG_H_ */