#include "function_pointers.h"

/**
 * int_index - searchs for integer
 *
 * @array: the input array
 * @size: the size of the array
 * @cmp: function that compares
 *
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	return (-1);
}
