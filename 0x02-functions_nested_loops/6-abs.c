#include "main.h"

/**
 * _abs - Entry point
 *
 * @n: checks the absolut value of a nimber
 *
 * Return: 0 Always (success)
 *
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);

}

