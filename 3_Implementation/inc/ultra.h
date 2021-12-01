#ifndef _ULTRA_H_
#define _ULTRA_H_

#include <avr/io.h>
#include <avr/interrupt.h>
#define F_CPU 1000000
#include <util/delay.h>
#include <stdlib.h>

void send_a_command(unsigned char command);
void send_a_character(unsigned char character);
void send_a_string(char *string_of_characters);

static volatile int pulse = 0;
static volatile int i = 0;

#define enable            5
#define registerselection 6
#endif