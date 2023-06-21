#include "main.h"

/**
 * times_table - Entry point
 *
 * Description: print time table from 0 to 9
 *
 * Return: void
 *
 */

void times_table(void)
{
	int i, n, mult;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (n = 1; n <= 9; n++)
		{
			_putchar(',');
			_putchar(' ');

			mult = i * n;

			if (mult <= 9)
				_putchar(' ');
			else
				_putchar((mult / 10) + 48);

			_putchar((mult % 10) + 48);
		}
		_putchar('\n');
	}
}
