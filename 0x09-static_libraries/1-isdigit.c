#include "main.h"

/**
 * _isdigit - function to check if entry is a digit
 * @c: test
 * Return: 1 or 0
*/

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
{
return (1);
			}
return (0);
}
