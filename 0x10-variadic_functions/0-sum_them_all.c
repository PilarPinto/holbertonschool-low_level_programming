#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - check the code for Holberton School students.
 * @n: Is the number of total addends
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	int sum = 0;
	unsigned int x;

	if (n == 0)
		return (0);

	va_start(arguments, n);

	for (x = 0; x < n; x++)
	{
		sum += va_arg(arguments, int);
	}
	va_end(arguments);
	return (sum);
}
