#include "main.h"

/**
 * _isalpha - Entry point
 *
 * @c: checks input of function is alpha or not
 *
 * Return: 0 (false)
 * 1(success)
 *
 */

int _isalpha(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	} else if (c > 96 && c < 123)
	{
		return (1);
	} else
		return (0);

}

