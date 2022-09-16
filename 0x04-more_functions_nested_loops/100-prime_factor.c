#include <stdio.h>

/**
 * main- prints the largest prime factor
 * of a number
 *
 * Return: returns 0
*/

int main(void)
{
	long number = 612852475143;
	int m;

	while (m++ < number / 2)
	{
		if (number % m == 0)
		{
			number /= 2;
			continue;
		}
		for (m = 3; n < number / 2; m += 2)
		{
			if (number % m == 0)
				number /= m;
		}

	}
	printf ("%ld\n", number);
	return (0);
}
