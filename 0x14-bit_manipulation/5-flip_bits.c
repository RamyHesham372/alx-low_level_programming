#include "main.h"

/**
 * flip_bits - counts the number of bits.
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 63, count = 0;
	unsigned long int num;
	unsigned long int num2 = n ^ m;

	while (i >= 0)
	{
		num = num2 >> i;
		if (num & 1)
			count++;

		i--;
	}

	return (count);
}

