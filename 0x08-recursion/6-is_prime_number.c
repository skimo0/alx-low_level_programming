#include "main.h"

int chick_prime(int n, int i);

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to be checked.
 * Return: 1 if the number is prime, 0 otherwise.
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (chick_prime(n, n -1));
}

/**
 * chick_prime - Helper function to check if a number is prime.
 * @n: The number to be checked for primality.
 * @i: The divisor being tested.
 * Return: 1 if the number is prime, 0 if it's not.
*/

int chick_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (chick_prime(n, i - 1));
}
