#include "main.h"

/**
 * _memset - Fills the first n bytes of a memory area with a constant byte.
 * @s: Pointer to the memory area to be filled.
 * @b: The byte value to fill the memory with.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the memory area 's'.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
