/*
 * timer.h
 *
 *  Created on: Dec 13, 2024
 *      Author: USER
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

#define NUM_OF_TIMERS	5
#define TIME_CYCLE	10

extern int timer_flag[NUM_OF_TIMERS];

void setTimer(int index, int duration);
void clearTimer(int index);
void timerRun();
int get_timer0_flag();
void setTimer0(int duration);

#endif /* INC_TIMER_H_ */

