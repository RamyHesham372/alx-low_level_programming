#include "main.h"

/**
 * _isdigit - Entry point
 *
 * @c: checks input of function
 *
 * Return: 0 for lowercase 1 for uppercase
 *
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
