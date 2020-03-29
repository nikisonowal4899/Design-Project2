#include "delay.h"

void delay(unsigned char time){  // Function for creating delay in milliseconds.
		unsigned char i,j;
    for(i=0; i<30; i++) {
			for(j=0; j<time; j++);
		}
}

void delay_us(unsigned int count) {
	while(count != 0) count--;
}