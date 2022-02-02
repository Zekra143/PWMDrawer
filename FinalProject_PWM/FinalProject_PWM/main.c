/*
 * FinalProject_PWM.c
 *
 * Created: 2/2/2022 10:52:52 PM
 * Author : zuzmo
 */ 

#include "ATmega32A_Config.h"
#include "PWM_Drawer.h"

#include <util/delay.h>

int main(void)
{
	PWMDrawer_Init();
	PWMDrawer_SignalAttributesType Signal_Data = {0, 0, 0, 0, 0};
	float32 Scale_ms = 0.25;
	while(1)
	{
		//TODO:: Please write your application code
		PWMDrawer_MeasureSignal(&Signal_Data);
		Scale_ms = (Signal_Data.Period_Time_ms) / 5;
		PWMDrawer_DrawSignal(&Signal_Data, Scale_ms);
		_delay_ms(100);
	}
}
