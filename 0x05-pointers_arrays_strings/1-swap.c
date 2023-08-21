#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * using tow input parameter
 *
 *
 * @a: input parameter 1
 * @b: input paramete 2
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
