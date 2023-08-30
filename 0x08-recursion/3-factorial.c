#include "main.h"

/**
 * factorial - Calculates the factorial of a non-negative integer.
 * @n: The integer for which factorial is to be calculated.
 * Return: The factorial of the input integer, or -1 if input is negative.
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
