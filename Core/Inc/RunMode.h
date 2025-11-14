/*
 * RunMode.h
 *
 *  Created on: Nov 13, 2025
 *      Author: karl.yamashita
 */

#ifndef INC_RUNMODE_H_
#define INC_RUNMODE_H_


#define DECLARE_MODE(mode,func) \
        { mode, func}


enum
{
	LOW_VOLTAGE_TRIGGER, // tr-4
	ALPINE_VIDEO_BYPASS,
	LATCH_UNLATCH_FROM_PULSE,
	DOUBLE_PULSE_OUTPUT,
	CLOSED_LOOP_TRIGGER,
	PULSE_EXTENDER,
	HORN_HONKING_OUTPUT,
	LINEAR_ACTUATOR_CONTROL,
	DOORLOCK_PULSE_GENERATOR,
	CHANNEL_SPLITTER,
	PULSE_TO_CONSTANT_OUTPUT,
    _3_IN_1_TIMERS,
	PULSES_TO_LATCH_UNLATCH,
	PULSES_TO_PULSE,
	PULSES_TO_TIMED_OUTPUT,
	LATCHING_OUTPUTS,
	CONSTANT_TO_PULSE_OUTPUT,
	INPUT_PULSE_DELAYED_OUTPUT_PULSE,
};

typedef void (*Function) (void);

typedef struct
{
	uint32_t mode;
}RunMode_t;

typedef struct
{
	uint32_t mode;
	Function func;
}RunAction_t;


void RunMode(RunMode_t *mode);

#endif /* INC_RUNMODE_H_ */
