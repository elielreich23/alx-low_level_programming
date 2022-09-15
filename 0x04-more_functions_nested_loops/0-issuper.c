#include "main.h"

/**
 * _isupper - function that verifies if a  character is uppercase or not
 * @c: test character
 * Return: returns 1 if  uppercase , 0 if not
*/

int _isupper(int c)
{
	char C = 'A';

	for (; C <= 'Z'; C++)
	{
		if (c == C)
		{
			return (1);
		}
	}
	return (0);
}

