/*
 * Functions.c
 *
 *  Created on: Aug 30, 2023
 *      Author: Subhanjit Debnath
 */
#include "fonts.h"
#include "ssd1306.h"
#include "stdio.h"


void funct1(void)
{
	 SSD1306_Clear(); // Clear Content
	 SSD1306_GotoXY (0,0);
	 printf ("Function 1  \n");
	 SSD1306_GotoXY (0,20);
	 printf("Function in\n ");
	 SSD1306_GotoXY (0,40);
	 printf("BootLoader \n ");
	 SSD1306_UpdateScreen(); //display
}

void funct2(void)
{
	 SSD1306_Clear(); // Clear Content
	 SSD1306_GotoXY (0,0);
	 printf ("Function 2  \n");
	 SSD1306_GotoXY (0,20);
	 printf("Function in\n ");
	 SSD1306_GotoXY (0,40);
	 printf("BootLoader \n ");
	 SSD1306_UpdateScreen(); //display
}

const uint32_t __attribute__((section(".shared_flash")))  ArrayFunction[] ={(uint32_t)funct1,(uint32_t)funct2};
/*
const uint32_t GetFunctionArrayPointers(void)
{
	return (uint32_t)(&Fp);
}*/
