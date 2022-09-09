#include <stdio.h>
#include <ctype.h>

/**
 * main - Prints the last digit of random number
 *
 * Return: Return 0
*/

int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		letter = tolower(letter);
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
