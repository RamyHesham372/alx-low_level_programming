#include "main.h"

/**
 * _islower - Entry point
 *
 * @c: checks input of function
 *
 * Return: 0 (false)
 * 1(success)
 *
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	return (0);
}

