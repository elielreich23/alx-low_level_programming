#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - Prints a string in reverse order
 * @s: string to reverse
 * return 0
*/

void print_rev(char *s)
{
	int lens = strlens(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
