#include "main.h"

/**
 * print_binary - prints the binary number.
 *
 * @n: a number will be printed
 */

void print_binary(unsigned long int n)
{
	unsigned long int num;
	int i = 63, count = 0;

	while (i >= 0)
	{
		num = n >> i;

		if (num & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}
		i--;
	}
	if (count == 0)
		_putchar('0');
}

