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

	for (l = 48; l <= 57; l++)
	{
		putchar(l);
		if (l <= 56)
		{
			putchar(44);
			putchar(32);
		}
	}
putchar(10);
return (0);
}
