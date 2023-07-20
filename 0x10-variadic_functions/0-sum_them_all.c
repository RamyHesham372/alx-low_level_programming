#include "variadic_functions.h"

/**
 * sum_them_all - count the sum of numbers.
 *
 * @n: the numbers of the arrguments.
 *
 * Return: the sum on success - 0 on failuer.
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	unsigned int i, s = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s += va_arg(args, int);
	}
	va_end(args);
	return (s);
}
