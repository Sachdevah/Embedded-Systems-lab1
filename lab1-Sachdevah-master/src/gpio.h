#ifndef GPIO_H
#define GPIO_H

// ECS714P/ECS642U Lab 1 header - provided version

// Create a bit mask (32 bits) with only bit x set
#define MASK(x) (1UL << (x))

// Freedom KL25Z LEDs pin numbers
#define RED_LED_POS (18)		// on port B
#define GREEN_LED_POS (19)	// on port B
#define BLUE_LED_POS (1)		// on port D

// Symbols for constants
#define OFF 0
#define ON 1
#define ONPERIOD 10 // time in 10ms units
#define OFFPERIOD 10 // time in 10ms units

// States
#define REDOFF 0
#define REDON 1
#define GREENOFF 2
#define GREENON 3
#define BLUEOFF 4
#define BLUEON 5
#define WHITEOFF 6
#define WHITEON 7
#define YELLOWOFF 8
#define YELLOWON 9
#define PURPLEOFF 10
#define PURPLEON 11

#endif
