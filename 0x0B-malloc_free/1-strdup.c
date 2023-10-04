#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *m;
	int i;
	int size;

	if (str == NULL)
	{
		return (NULL);
	}
	for (size = 0; str[size] != '\0'; size++)
	;
	m = malloc(size * sizeof(*str) + 1);

	if (m == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i]; i++)
			m[i] = str[i];
	}
	return (m);
}
