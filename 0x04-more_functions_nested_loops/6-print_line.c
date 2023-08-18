#include "main.h"

/**
 * print_line - Print a line made of underscores
 *
 * Prints a horizontal line using underscore characters.
 *
 * @n: Number of underscores in the line.
*/

void print_line(int n)
{
	int lnchr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnchr = 1; lnchr <= n; lnchr++)
			_putchar('_');
		_putchar('\n');
	}
}
