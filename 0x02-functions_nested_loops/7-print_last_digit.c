#include "holberton.h"
/**
 *print_last_digit - print the last digit of a number
 * @n: is the parameter
 *Return: 'lsd' value
 */
int print_last_digit(int n)
{
	int lsd = n % 10;

	if (lsd < 0)
		lsd = -lsd;
	_putchar(lsd + '0');

	return (lsd);
}
