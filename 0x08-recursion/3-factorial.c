#include "main.h"

/**
 * factorial - function to print factorial
 * @n: value to be checked
 *
 * Return: nothing
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
