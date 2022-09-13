#include<stdio.h>
/**
 * print_alphabet - function that print alphabet
 * it prints in lowercase
 * Return: no return
*/

void print_alphabet(void)
{
	int l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar(10);
}
