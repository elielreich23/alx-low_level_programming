#include "main.h"

/**
 * swap_int - function to swap the value of two int
 * @a: parameter
 * @b: parameter
 * Returns: nothing
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
