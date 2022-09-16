#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size:size parameter of triangle
 * Return: returns nothing
*/

void print_triangle(int size)
{
	int ind1, ind2;

	if (size > 0)
	{
		for (ind1 = 1; ind1 <= size; ind1++)
		{
			for ((ind2 = size - ind1); ind2 > 0; ind2--)
			{
				putchar (' ');
			}
			for (ind2 = 0; ind2 < ind1; ind2++)
			{
				putchar ('#');
			}
			if (ind1 == size)
			{
				continue;
			}
			putchar ('\n');
		}
	}
	putchar('\n');
}
