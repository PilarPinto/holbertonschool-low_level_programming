#include "holberton.h"

/**
 * get_bit - Get the bit at given index.
 * @n:The decimal number
 * @index:The index in the binary representation
 * Return: The bit in the position.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int number;

	if (index > 64)
		return (-1);

	number = 0;

	while (number < index)
	{
		n = (n >> 1);
		number++;
	}
	return (n & 1);
}
