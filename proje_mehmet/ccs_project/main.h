#include <18F4431.h>
#device ADC=16

#FUSES NOWDT                 	//No Watch Dog Timer
#FUSES WDT128                	//Watch Dog Timer uses 1:128 Postscale
#FUSES NOBROWNOUT            	//No brownout reset
#FUSES PWMPIN                	//PWM outputs disabled upon Reset
#FUSES NOLVP                 	//No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O

#use delay(internal=8000000)

