#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the
 * string given as a parameter.
 * @str:String to be copied
 *
 * Return: NULL in case of error, pointer to allocated
 * space
*/

char *_strdup(char *str)
{
	char *c;
	int i, len;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		len++;

	c = malloc(sizeof(char) * (len + 1));

	if (c == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		c[i] = str[i];
	}
	c[len] = 0;
	return (c);
}
