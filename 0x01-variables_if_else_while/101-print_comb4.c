#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
*/

int main(void)
{
	int l, l1, l2;

	for (l = 48; l <= 56; l++)
	{
		for (l1 = l + 1; l1 <= 57; l1++)
		{
			for (l2 = l1 + 1; l2 <= 57; l2++)
			{
				putchar(l);
				putchar(l1);
				putchar(l2);
				if (l != 55 || l1 != 56 || l2 != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
