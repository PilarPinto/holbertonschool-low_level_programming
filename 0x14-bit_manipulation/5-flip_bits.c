#include "holberton.h"

/**
 * flip_bits - Convert a number in another.
 * @n:The decimal number
 * @m:The other decimanl number
 * Return: The amount of bits to be fliped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int number, acum;

	acum = n ^ m;
	number = 0;

	while (acum)
	{
		number = number + (acum & 1);
		acum >>= 1;
	}
	return (number);
}
