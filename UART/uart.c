#include "lpc214x.h"

void transmit(unsigned char ch)
{
 while (!(U0LSR & 0x20));
 
 U0THR =ch;
}


int main()
 {
 	 int i;
	 unsigned char  temp[30] = "Welcome to FC" ;
 	 PINSEL0 = 5;
	 U0LCR = 0x83;
	 U0DLM =0x00;
	 U0DLL =97;
	 U0LCR =0x03;
	 for(i=0; temp[i] != '\0'; i++)
	 {
	 transmit(temp[i]);
	 }
	 return 0;
}
