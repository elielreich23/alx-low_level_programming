#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: returns integer lenght
*/

int _strlen(char *s)
{
	int len = 0;

	while (*(len + s) != '\0')
		len++

	return (len);
}
