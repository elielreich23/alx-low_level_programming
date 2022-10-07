#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: index
 * Return: char pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *r;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;
	r = malloc(sizeof(char) * (len + 1));

	if (r == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		r[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		r[len++] = s2[index];

	r[len] = '\0';

	return (r);
}
