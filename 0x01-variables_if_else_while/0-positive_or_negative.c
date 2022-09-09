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
	if (b > 0)
		printf("%d is positive\n", b);
	else if (b == 0)
		printf("%d is zero\n", b);
	else
		printf("%d is negative\n", b);
	return (0);
}
