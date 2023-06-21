#include "main.h"

/**
 * print_sign - Entry point
 *
 * @n: checks input of function is positive or negative
 *
 * Return: 1 if n is positive, -1 if negative, 0 if equal to 0
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	{
		_putchar(45);
		return (-1);
	}

}

