#include "function_h"

/**
 * int_index - searches for integer
 * @array: the int array
 * @size: the size
 * cmp: the compare function
 *
 * Return: the integr index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
