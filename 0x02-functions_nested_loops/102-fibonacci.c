#include "main.h"

/**
 * main - Entry point
 *
 * Description: print all fibonacci numbers to 50
 *
 * Return: 0 always (success)
 *
 */

int main(void)
{
	unsigned long num1 = 1, num2 = 2, sum;
	int n;

	printf("%lu, %lu, ", num1, num2);
	for (n = 1; n < 50; n++)
	{
		sum = num1 + num2;
		printf("%lu, ", sum);

		num1 = num2;
		num2 = sum;

	}
	printf("\n");
	return (0);
}
