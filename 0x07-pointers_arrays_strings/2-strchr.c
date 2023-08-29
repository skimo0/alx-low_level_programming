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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
