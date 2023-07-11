#include "main.h"

/**
 * *create_array - entry point
 * @size: the size of the input
 * @c: the repeated char
 * Return: ptr - the pointer
 *
 */

char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size);

	if (size == 0)
	{
		return (0);
	}
	int i;

	for (i = 0; i < size; ++i)
	{
		ptr[i] = c;
	}

	return (ptr);
}
