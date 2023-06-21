#include "main.h"

/**
 * main - Entry point
 *
 * Description: compute and print all numbers that are multibles of 3 and 5
 *
 * Return: 0 always (success)
 *
 */

int main(void)
{
	int max_num = 1024;
	int sum = 0;

	for (int n = 1; n < max_num; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum += n;
		}
	}

	printf("%d\n", sum);

	return (0);
}
