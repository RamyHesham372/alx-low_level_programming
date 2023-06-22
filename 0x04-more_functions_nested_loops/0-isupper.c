#include "main.h"

/**
 * _isupper - Entry point
 *
 * @c: checks input of function
 *
 * Return: 0 for lowercase 1 for uppercase
 *
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
