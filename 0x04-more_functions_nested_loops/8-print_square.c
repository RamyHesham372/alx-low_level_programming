#include "main.h"

/**
 * print_square - Entry point
 *
 * @size: input number
 * Description: draw a line
 *
 * Return: void
 *
 */

void print_square(int size)
{
	int i;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (r = 1; r <= size; r++)
				_putchar('#');

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
