#include <stdio.h>
#include "main.h"

/**
 * print_square - prints squares
 * @size: parameter
 * return: returns nothing
*/

void print_square(int size)
{
	int ind1, ind2;

	if (size > 0)
	{
		for (ind1 = 0; ind1 < size; ind1++)
		{
		for (ind2 = 0; ind2 < (size - 1); ind2++)
		{
		putchar ('#');
		}

	putchar ('#');
	putchar ('\n');
		}
	}
	else
	{
	putchar ('\n');
	}
}	
