#include <stdio.h>

/*
 * main - print the number of arguments passed to the program
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Returns: 0 on success.
 */

int main(int argc, char *argv[])
{
	(void)argv;/*Ignore argv*/

	printf("%d\n", argc - 1);

	return (0);
}
