#include "main.h"

/**
 * _strncpy - a function that copies a portion of one string into another
 *
 * @dest: pointer to destination buffer
 * @src: pointer to source string
 * @n: maximum number of bytes to copy from @src
 *
 * Return: @dest
*/

char *_strncpy(char *dest, const char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
