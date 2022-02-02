/*
 * ICU_Lconfig.c
 *
 * Created: 31/1/2022
 *  Author: zuz
 */ 

#include "ICU.h"

const ICU_ConfigurationType gStrICU_Config = 
{
	ICU_TIMER_1,
	ICU_PRESCALE_8,
	ICU_TRIGGER_FALLING_EDGE,
	ICU_INTERRUPT_DISABLED
};