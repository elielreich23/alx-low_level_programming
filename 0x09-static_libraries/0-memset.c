#include "main.h"

/**
 * _memset - _memset() function to fill
 * first n bytes of memory area
 * pointed to s which is the constant byte b
 * @s: target
 * @b: constant byte
 * @n: number of bytes
 * Return: new value of s
*/

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
