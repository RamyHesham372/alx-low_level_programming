#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *ptr;
	int size = 0, n = 0;

	if (str == NULL)
	return (NULL);

	for (; str[size] != '\0'; size++)
	;

	ptr = malloc(size * sizeof(*str) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (; n < size; n++)
		{
			ptr[n] = str[n];
		}
	}
	return (ptr);
}
