#include "main.h"


int actual_sprt_recursion(int n, int i);
/**
 * _sqrt_recursion - Calculates the integer square root
 * of a non-negative number.
 * @n: The number for which the square root is to be calculated.
 * Return: The integer square root of n, or -1 if n is negative.
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sprt_recursion(n, 0));
}

/**
 * actual_sprt_recursion - Helper function to calculate integer square root.
 * @n: The number for which the square root is being calculated.
 * @i: The current value being tested as a possible square root.
 * Return: The integer square root of n if found, otherwise -1.
*/

int actual_sprt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sprt_recursion(n, i + 1));
}
