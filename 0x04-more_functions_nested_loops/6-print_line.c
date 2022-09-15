#include <stdio.h>
#include "main.h"

/**
 * print_line - prints line
 * @n: parameter
 * return: nothiing
*/

void print_line(int n)
{
	while (n-- > 0)
	{
		putchar ('_');
	}
	putchar('\n');
}
