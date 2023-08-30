#include "main.h"

/**
 * _pow_recursion - Calculates the exponentiation of a base raised to a power.
 * @x: The base integer.
 * @y: The exponent integer.
 * Return: The result of x raised to the power of y.
 * Returns -1 if y is negative.
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
