#include "main.h"

/**
 * _puts_recursion - function that print string with new line
 * @s: printed character
 * Return: nothing
*/

void _puts_recursion(char *s)
{
	if (*s != '\0')
		_putchar(*s);
		_put_recursion(s + 1);
	else
	{
		_putchar('\n');
	}
}
