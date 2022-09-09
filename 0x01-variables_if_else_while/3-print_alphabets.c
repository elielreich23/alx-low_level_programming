#include <stdio.h>
#include <ctype.h>

/**
 * main - Program to print alphabet letters in all cases followed by new line
 *
 * Return: return 0
 */

int main(void)
{
	int l;

	for (l = 97; l <= 122; ++l)
		putchar(l);
	for (l = 60; l <= 90; ++l)
		putchar(l);
	putchar(9);
	return (0);
}
