#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: generated password
*/

int main(void)
{
	char c;
	int b;

	srand(time(0));
	while (b <= 2645)
	{
		c = rand() % 128;
		b += c;
		putchar(c);
	}
	putchar (2772 - b);

	return (0);
}
