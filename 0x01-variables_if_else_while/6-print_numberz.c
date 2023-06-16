#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all single numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 0 ; num < 10 ; num++)
	{
		putchar(num + 48);
	}
	putchar('\n');

	return (0);
}
