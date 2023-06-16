#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all lower alpha letters except e q
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower_alpha = 'a';

	while (lower_alpha <= 'z')
	{
		if (lower_alpha == 'e' || lower_alpha == 'q')
			lower_alpha++;

		putchar(lower_alpha);
		lower_alpha++;
	}
	putchar('\n');

	return (0);
}
