#include "holberton.h"

/**
 * print_number - Print the negative numbers with recursive.
 * @n: The parameter.
 *
 */
void print_number(int n)
{
	unsigned int un = n;

	if (n < 0)
	{
		_putchar('-');
		un = -un;
	}
	if (un / 10)
	{
		print_number(un / 10);
	}
	_putchar(un % 10 + '0');
}
