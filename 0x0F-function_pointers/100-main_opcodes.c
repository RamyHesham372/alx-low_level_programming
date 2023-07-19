#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int my_bytes, i;
	char *ptr_arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	my_bytes = atoi(argv[1]);

	if (my_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr_arr = (char *)main;

	for (i = 0; i < my_bytes; i++)
	{
		if (i == my_bytes - 1)
		{
			printf("%02hhx\n", ptr_arr[i]);
			break;
		}
		printf("%02hhx ", ptr_arr[i]);
	}
	return (0);
}
