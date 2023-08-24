#include "main.h"

/**
 * _strncpy - a function that concatenates two strings
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most muster of bytes from @src
 *
 * Return: @dest
*/

char *_strncpy(char *dest, char *src, int n)
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
