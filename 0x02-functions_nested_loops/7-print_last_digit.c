#include "main.h"

/**
 * print_last_digit - Print the last digit of a number.
 * @n: The number from which to extract and print the last digit.
 *
 * This function takes a number as input and prints its last digit.
 *
 * Return: The last digit of the input number @n.
*/

int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		lastDigit = -1 * (n % 10);
	else
		lastDigit = n % 10;

	_putchar(lastDigit + '0');
	return (lastDigit);
}
