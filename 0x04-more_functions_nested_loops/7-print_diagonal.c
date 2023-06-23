#include "main.h"

/**
 * print_diagonal - Entry point
 *
 * @n: input number
 * Description: draw a line
 *
 * Return: void
 *
 */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			int row = i;

			while (--row)
			{
				_putchar(' ');
			}

		_putchar('\\');
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
