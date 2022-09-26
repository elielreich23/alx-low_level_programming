#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard.
 * @a: array containing board elements
 * returns nothing
*/

void print_chessboard(char (*a)[8])
{
	int c, d;

	for (c = 0; a[c][7]; c++)
	{
		for (d = 0; d < 8; d++)
			_putchar(a[c][d];
			_putchar('\n');
	}
}
