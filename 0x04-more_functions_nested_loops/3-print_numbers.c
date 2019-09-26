#include "holberton.h"
/**
 * print_numbers - Print the numbers from 0 to 9.
 *
 */
void print_numbers(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
		_putchar(number);

	_putchar('\n');
}
