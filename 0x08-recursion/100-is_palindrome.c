#include "main.h"

int check_palindrome(char *s, int start, int end);
int calculate_string_length(char *s);

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
	return (check_palindrome(s, 0, calculate_string_length(s)));
}

/**
 * calculate_string_length - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
*/
int calculate_string_length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + calculate_string_length(s + 1));
}
