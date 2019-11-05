#include "holberton.h"

/**
 * clear_bit - Set a 0 in a given position
 * @n:The decimal number pointer
 * @index:The index in the binary representation
 * Return: The decimal number without the 1 bit.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int number;

	if (index > 64)
		return (-1);

	number = 0;

	while (number <= index)
	{
		*n = (*n & (~1 << index));
		number++;
	}
	return (1);
}
