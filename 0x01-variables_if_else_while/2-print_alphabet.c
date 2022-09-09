#include <stdio.h>
#include <ctype.h>

/**
 * main - Prints the last digit of random number
 *
 * Return: Return 0
*/

int main(void)
{
	int l;

	for (l = 'a'; l <= 'z'; l++)
	{
		l = tolower(l);
		putchar(l);
	}
	putchatr('\n');
	return (0);
}
