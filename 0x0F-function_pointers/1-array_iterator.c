#include "function_pointers.h"

/**
 * array_iterator - prints the values
 *
 * @array: the input array
 * @size: the size of the array
 * @action: function that prints the array
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}