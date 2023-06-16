#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all lower and upper alpha letters
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower_alpha = 'a';
	char upper_alpha = 'A';

	while (upper_alpha <= 'Z')
	{
		while (lower_alpha <= 'z')
		{
			putchar(lower_alpha);
			lower_alpha++;
		}
	putchar(upper_alpha);
	upper_alpha++;
	}
	putchar('\n');

	return (0);
}
