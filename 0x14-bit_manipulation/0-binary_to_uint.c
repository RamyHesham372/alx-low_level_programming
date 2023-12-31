#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int.
 *
 * @b: string of the number.
 *
 * Return: the number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i;

	if (b == 0)
	{
		return (0);
	}

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		val = 2 * val + (b[i] - '0');
	}

	return (val);
}

