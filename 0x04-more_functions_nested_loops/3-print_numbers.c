#include "main.h"
#include <stdio.h>
/**
 * print_numbers - function that print number form 1-9
 * 0 to 9
 * Retuns: returns nothing
*/

void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}
	putchar (10);
}
