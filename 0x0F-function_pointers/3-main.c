#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int fir_num, sec_num;
	char *ptr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	fir_num = atoi(argv[1]);
	ptr = argv[2];
	sec_num = atoi(argv[3]);

	if (get_op_func(ptr) == NULL || ptr[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*ptr == '/' && sec_num == 0) ||
	    (*ptr == '%' && sec_num == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(ptr)(fir_num, sec_num));

	return (0);
}
