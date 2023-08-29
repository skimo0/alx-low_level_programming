#include "main.h"

/**
 * _strpbrk - Finds a byte from a set of bytes in a string.
 * @s: The string to search in.
 * @accept: The set of bytes to look for.
 * Return: A pointer to the matching byte in 's', or NULL if none is found.
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}

	return (0);
}
