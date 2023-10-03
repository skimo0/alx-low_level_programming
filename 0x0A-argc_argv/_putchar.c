#include <stdio.h>
#include "main.h"

/**
 * _putchar - Writes the character 'c' to stdout.
 * @c: The character to print.
 *
 * Returns: On success, returns 1. On error, returns -1 and sets errno appropriately.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}
