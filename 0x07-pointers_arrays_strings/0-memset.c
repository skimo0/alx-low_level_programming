#include "main.h"

/**
 * _memset - fills the first n bytes of a memory area with a constant byte.
 * @s: pointer to the memory area to be filled.
 * @b: the byte value to fill the memory with.
 * @n: the number of bytes to be filled.
 * Return: a pointer to the memory area s.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
