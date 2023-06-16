#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all lower alpha letters in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower_alpha = 'z';

	while (lower_alpha >= 'a')
	{
		putchar(lower_alpha);
		lower_alpha--;
	}
	putchar('\n');

	return (0);
}
