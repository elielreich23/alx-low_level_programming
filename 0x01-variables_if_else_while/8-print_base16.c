#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: returns 0 when everything works fine
 *
*/

int main(void)
{
	int l;

	for (l = 48; l <= 57; ++l)
	{
		putchar(l);
	}
	for (l = 97; l <= 102; ++l)
	{
		putchar(l);
	}
	putchar(10);
	return (0);
}
