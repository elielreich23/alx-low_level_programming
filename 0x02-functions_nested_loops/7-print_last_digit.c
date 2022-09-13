#include "main.h"

/**
 * print_last_digit - prints the absolute value of a number
 * @n: number targeted
 * Return: returns 0
*/

int print_last_digit(int n)
{
	int lastdigit = n % 10;

	if (last_num < 0)
	lastdigit *= -1;

	_putchar (lastdigit + '0');
	return (lastdigit);
}
