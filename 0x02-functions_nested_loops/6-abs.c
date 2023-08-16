#include "main.h"

/**
 * _abs - Get the positive value of an integer.
 * @n: The number to find the positive value of.
 *
 * This function takes a number and gives back its positive version.
 *
 * Return: The positive value of the input number @n.
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
