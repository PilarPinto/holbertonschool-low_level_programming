#include "holberton.h"

/**
 * print_binary - check the code for Holberton School students.
 * @n: Is the decimal number
 * Return: The last column of the numbers
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
