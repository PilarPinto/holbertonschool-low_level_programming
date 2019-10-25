#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list arguments;
	char *str;

	va_start(arguments, format);

	while (format[i] != '\0')
	{
		switch(format[i])
		{
		case 'c':
			printf("%c", va_arg(arguments, int));
			break;
		case 'i':
			printf("%d ", va_arg(arguments, int));
			break;
		case 'f':
			printf("%f ", va_arg(arguments, double));
			break;
		case 's':
			str = va_arg(arguments, char*);
			if (str == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		default:
			i++;
			continue;
		}
		if (i < format[i + 1])
			printf(", ");
		i++;

	}
	printf("\n");
	va_end(arguments);
}
