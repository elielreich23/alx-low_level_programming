#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: returns 0 when everything works fine
 *
*/

int main(void)
{
	int b;

	srand(time(0));
	b = rand() - RAND_MAX / 2;
	if (b == 0)
		printf("%i is zero\n", b);
	else if (b < 0)
		printf("%i is negative\n", b);
	else
		printf("%i is positive\n", b);
	return (0);
}
