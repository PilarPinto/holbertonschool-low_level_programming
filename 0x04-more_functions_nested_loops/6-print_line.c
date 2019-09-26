#include "holberton.h"
/**
 * print_line - Print a number of lines.
 * @n: The param of input
 */
void print_line(int n)
{
	int times = 0;

	while (times < n)
	{
		_putchar(95);
		times++;
	} _putchar('\n');
}
