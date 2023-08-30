#include "main.h"

/**
 * _puts_recursion - Recursively prints a string followed by a newline.
 * @s: Pointer to the string to be printed.
 * Return: void
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
