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
	int num;

	while (num++ < number / 2)
	{
		if (number % num == 0)
		{
			number / 2;
			continue;
		}
		for (num = 3; num < number / 2; num += 2)
		{
			if (number % num == 0)
				number /= num;
		}

	}
	putchar ("%d\n", number);
	return (0);
}
