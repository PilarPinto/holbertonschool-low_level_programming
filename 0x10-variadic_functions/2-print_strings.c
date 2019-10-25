#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Print the string arguments.
 * @separator: Is the separator symbol
 * @n: Is the amount of words
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arguments;
	char *str;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arguments, char*);

		if (i == (n - 1))
		{
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
		}
		else
			if (str == NULL)
				printf("%s%c ", "(nil)", *separator);
			else
				printf("%s%c ", str, *separator);
	}
	printf("\n");

	va_end(arguments);
}
