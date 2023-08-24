#include "main.h"

/**
 * _strncat - a function that concatenates tow strings.
 *
 * @src: pointer to source input
 * @dest: pointer to detination input
 * @n: most number of bytes from @src
 *
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int s, i;

	s = 0;

	while (dest[s])
		s++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[s + i] = src[i];

	dest[s + i] = '\0';

	return (dest);
}

