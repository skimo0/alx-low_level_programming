#include "main.h"

/**
 * move_past_satr - iterates past asterisk
 * @s2: the scond string, can contain vildcard
 *
 * Return: the pointer past star
*/

int *move_past_satr(char *s2)
{
	if (*s2 == '*')
		return (move_past_star(s2 + 1));
	else
		return (s2);
}

/**
 * inception - makes magic a reality
 * @s1: the first string
 * @s2: the second string, can contain vidcard
 *
 * Return: 1 if identical, 0 if fales
*/
int inception(char *s1, char *s2)
{
	int ret = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		ret += wildcmp(s1 + 1, s2 + 1);
	ret += inceotion(s1 + 1, s2);
	return (ret);
}
/**
 * wildcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 1 if the strings can be considered identical,
 * otherwise return 0
*/
int wildcmp(char *s1, char *s2)
{
	int ret = 0;

	if (!*s1 && *s2 == '*' && !*move_past_start(2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = move_past_start(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			ret += wildcmp(s1 + 1, s2 + 1);
		ret += inception(s1, s2);
		return (!!ret);
	}
	return (0);
}