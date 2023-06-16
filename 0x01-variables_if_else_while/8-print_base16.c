#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all Hexadecimal
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit = 48;

	while (digit <= 102)
	{
		if (digit == 58)
			digit += 39;

	putchar(digit);
		digit++;
	}
	putchar('\n');

	return (0);
}
