#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * @n: is the last digit of a number
 *
 * Return: the last digit
 *
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		last_digit = -1 * (n % 10);
	else
		last_digit = n % 10;
	_putchar(last_digit + '0');
	return (last_digit);

}

