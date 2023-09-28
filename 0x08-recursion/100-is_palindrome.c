#include "main.h"

int check_palindrome(char *s, int i, int end);
int _strlen_recursion(char *s);

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if @s is a palindrome, 0 if it's not.
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
*/
int _string_length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _string_length(s + 1));
}

/**
 * check_palindrome - Checks if a string is a palindrome.
 * @s: The input string.
 * @start: Starting index for comparison.
 * @end: Ending index for comparison.
 *
 * Return: 1 if the string is a palindrome, 0 if it is not.
*/

int check_plaindrome(char *s, int start, int end)
{
	if (*(s + start) != *(s + end - 1))
		return (0);
	if (start >= end)
		return (1);
	return (check_plaindrome(s, start + 1, end - 1));
}
