#include <stdio.h>
#include "main.h"

/**
 * main - Prints the name of the program.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: Always 0 (Success).
 */

int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
