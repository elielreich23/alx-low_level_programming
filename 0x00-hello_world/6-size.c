#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: returns 0
 *
 */

int main(void)
{
	char c;
	int i;
	long lo;
	long long int lli;
	float f;

	printf("Size of a char: %d bytes(s)\n", sizeof(c));
	printf("Size of an int: %d bytes(s)\n", sizeof(i));
	printf("Size of a long: %d bytes(s)\n", sizeof(lo));
	printf("Size of a long long int: %d bytes(s)\n", sizeof(lli));
	printf("Size of a float: %d bytes(s)\n", sizeof(f));
	return (0);
}
