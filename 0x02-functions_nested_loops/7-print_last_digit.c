#include "main.h"

/**
 * print_last_digit - prints the absolute value of a number
 * @n: number targeted
 * Return: returns 0
*/

int print_last_digit(int n)
{
	int last_num = n % 10;

	if (last_num < 0)
		last_num *= -1;

		_putchar (last_num + '0');
		return (last_num);
}
