#include "main.h"

/**
 * _puts_recursion - function that print string with new line
 * @s: printed character
 * Return: nothing
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar ('\n');
	else
	{
		_putchar(s[0]);
		_putchar(s + 1);
	}
}
