#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 *
 * Return: pointer to the resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	char s1, s2;

	s1 = 0;
	while (dest[s1])
		s1++;

	for (s2 = 0; src[s2] ; s2++)
		dest[s1] = src[s2];
	dest[s1] = '\0';
	s1++;

	return (dest);
}
