#include <stdio.h>
/**
 * main - prints out first 50
 * fibonacci suit numbers
 * Return: return 0
*/

int main(void)
{
	int f;

	unsigned long l1 = 0, l2 = 1, l3;

	for (f = 0; f < 50; f++)
	{
		l3 = l1 + l2;
		printf("%lu", l3);
		l1 = l2;
		l2 = l3;

		if (f == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
