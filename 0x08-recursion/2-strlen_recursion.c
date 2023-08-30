#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: Pointer to the string to be printed.
 * Return: void
*/

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s > '\0')
	{
		n += _strlen_recursion(s + 1) + 1;
	}
	return (n);
}
