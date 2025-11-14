/*
 * RunMode.c
 *
 *  Created on: Nov 13, 2025
 *      Author: karl.yamashita
 */

#include "main.h"


RunMode_t run_mode =
{
	.mode = ALPINE_VIDEO_BYPASS // default for now
};



RunAction_t RunActionTable[] =
{
	MODE_LOW_VOLTAGE_TRIGGER,
	MODE_ALPINE_BYPASS
};


void RunMode(RunMode_t *mode)
{
	int i = 0;
	int RunActionSize = sizeof(RunActionTable) / sizeof(RunActionTable[0]);

	for(i = 0; i < RunActionSize; i++)
	{
		if(RunActionTable[i].mode == mode->mode)
		{
			RunActionTable[i].func(); // once we jump to function, will not return.
		}
	}

	Error_Handler(); // we should never call this.
}
