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
	int limit = 4000000;
	int sum = 0;
	int fib1 = 1;
	int fib2 = 2;
	int nextFib;

	while (fib1 <= limit)
	{
		if (fib1 % 2 == 0)
		{
			sum += fib1;
		}

		nextFib = fib1 + fib2;

		fib1 = fib2;
		fib2 = nextFib;
	}

	printf("%d\n", sum);

	return (0);
}
