#include "main.h"

/**
 * create_array - creates an array of chars, and
 * initializes  with a specific char.
 * @size: Size of the array
 * @c: inserted character
 * Return: NULL if size is zero or if it fails,
 * pointer to array if everything is normal.
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
