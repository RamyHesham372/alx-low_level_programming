#include "main.h"

/**
 * print_times_table - Entry point
 *
 * @n: the input number
 *
 * Return: void
 *
 */

void print_times_table(int n)
{
	int i, mult, r;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (r = 1; r <= n; r++)
			{
				_putchar(',');
				_putchar(' ');

				mult = i * r;

				if (mult <= 9)
					_putchar(' ');

				if (mult <= 99)
					_putchar(' ');

				if (mult >= 100)
				{
					_putchar((mult / 100) + 48);
					_putchar((mult / 10) % 10 + 48);
				}
				else if (mult >= 10 && mult <= 99)
				{
					_putchar((mult / 10) + 48);
				}
				_putchar((mult % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
