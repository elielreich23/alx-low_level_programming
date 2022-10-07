#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: smallest number in the array
 * @max: lagrest value in the array
 *
 * Return: pointer to the address of the memory block
*/

int *array_range(int min, int max)
{
	int *bloc;
	int a, b = 0;

	if (min > max)
		return (NULL);

	bloc = malloc(sizeof(*bloc) * ((max - min) + 1));
	if (bloc != NULL)
	{
		for (a = min; a <= max; a++)
		{
			bloc[b] = a;
			b++;
		}
		return (bloc);
	}
	else
		return (NULL);
}
