#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - Print the number with separator.
 * @separator:Is the string to be printed
 * @n:Is the number of the total addends
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arguments;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d", va_arg(arguments, int));
		else
			printf("%d%c", va_arg(arguments, int), *separator);
	}
	printf("\n");

	va_end(arguments);
}
