#include "main.h"

/**
 * _strchr - Find a character in a string.
 * @s: The string to search.
 * @c: The character to look for.
 *
 * This function searches for the first occurrence of the character @c
 * in the string @s.
 *
 * Return: If found, returns a pointer to the location of @c in @s.
 * If not found, returns NULL.
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
