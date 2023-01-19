#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything.
 * @format: List of all arguments passed to function.
 *
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list args;
	char *s, *separator;

	separator = "";

	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case '':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					S = "(nil)";
				printf("", separator, s);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
