#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 1 on failure.
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", sum);


	}
	else
	{
		printf("error");
		return (1);
	}

}
