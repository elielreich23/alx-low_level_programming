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

	for (l = 122; l >= 97; --l)
	{
		putchar(l);
	}
	putchar(10);
	return (0);
}
