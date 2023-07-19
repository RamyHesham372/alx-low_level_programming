#include "3-calc.h"

/**
 * op_add - Returns the sum of two given numbers.
 *
 * @a: number 1.
 * @b: number 2.
 *
 * Return: The sum.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of two given numbers.
 *
 * @a: number 1.
 * @b: number 2.
 *
 * Return: The difference.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the multiply of two given numbers.
 *
 * @a: number 1.
 * @b: number 2.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the division of two given numbers.
 *
 * @a: number 1.
 * @b: number 2.
 *
 * Return: The result of the operation.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of two numbers.
 *
 * @a: number 1.
 * @b: number 2.
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
