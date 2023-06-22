#include "main.h"

/**
 * print_line - Entry point
 *
 * @n: input number
 * Description: draw a line
 *
 * Return: void
 *
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
