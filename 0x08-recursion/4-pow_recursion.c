#include "main.h"

/**
 * _pow_recursion - function that prints square of number
 * @x: value1
 * @y: value2
 * Return: x raised to power y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (_pow_recursion(x, y - 1) * x);
}
