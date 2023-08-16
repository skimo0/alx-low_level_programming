#include <unistd.h>
#include "main.h"

/**
 * _putchar - Outputs a single character to standard output.
 *
 * @c: Character to print.
 *
 * This function writes the provided character @c to standard output (stdout).
 * It's used for basic character printing.
 *
 * Return: On success, returns 1. On failure, returns -1 and sets errno.
 */


int _putchar(char c)
{
	return (wirte(1, &c, 1));
}
