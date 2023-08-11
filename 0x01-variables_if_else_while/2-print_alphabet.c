#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the alphabet in lowercase
 *
 * Return: always 0 (success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		puchar(ch);
		ch++;
	}
	puchar('\n');

	return (0);
}
