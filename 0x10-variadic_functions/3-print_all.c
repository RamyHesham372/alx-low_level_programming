#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints any argument with any data type
 * @format: list of types of argument
 */

void print_all(const char * const format, ...)
{
	char *str, *sepe = "";
	int i = 0;

	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sepe, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", sepe, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sepe, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sepe, str);
					break;
				default:
					i++;
					continue;
			}
			sepe = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(args);
}
