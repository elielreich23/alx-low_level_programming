#include "function_pointers.h"

/**
*int_index - search for an integer
*@array: array to search
*@size: size of the array
*@cmp: function pointer to compare value
*
*Return: returns -1 if no element match
* or when size is less than zero
*return pointer to the first corresponding element
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int index = 0;
if (array == NULL || cmp == NULL)
return (-1);

for (; index < size; index++)
{
if (cmp(array[index]) != 0)
return (index);
}
return (-1);
}
