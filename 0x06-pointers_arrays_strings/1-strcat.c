include "main.h"

/**
 * _strcat - concatenates  the string pointed to by @src to
 * the end of the string pointed to by @dest
 * @dest: String that will be appended
 * @src: String to be concatenated upon
 *
 * Return: returns poiner to @dest
*/

char *_strcat(char *dest, char *src)
{
	int ind = 0, dest_len = 0;

	while (dest[ind++])
		dest_len++;

	for (index = 0; src[ind]; ind++)
		dest[dest_len++] = src[ind];

	return (dest);
}
