#include <stdio.h>
#include "main.h"

/*
 * main - Prints the count of arguments provided to the program.
 *
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Returns: 0 on success.
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
