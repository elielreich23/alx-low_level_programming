#include<stdio.h>
#include "main.h"

/**
 * print_most_numbers -function to print all numbers from 0-9 except 2 & 4
 * 0 to 9 except 2 and 4
 * retun: returns nothing
*/

void print_most_numbers(void)
{
	int l;

	for (l = 48; l < 58; l++)
	{
		if ((l == 50) || (l == 52))
		{
			continue;
		}
		putchar(l);
	}
	putchar(10);
}


