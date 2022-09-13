#include "main.h"

/**
 *print_alphabet_x10 - function that print the alphabet 10 times
 *
 * Return: return 0
*/

void print_alphabet_x10(void)
{
	int l;
        int counter = 0;
	while (counter++ <= 9)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar(10);
	}
}
