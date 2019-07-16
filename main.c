#include"lpc21xx.h"
#include<stdio.h>
#include"LCD.h"

int main()
{
 IODIR0 &= 0xFFFFFFFF;
	 LCD_INIT();
    delay(1000);
	  LCD_PRINT("LCD Printing");
	  LCD_CMD(0xC8);
	  LCD_PRINT("It works!");
	
	  delay(10000);
	 
}
