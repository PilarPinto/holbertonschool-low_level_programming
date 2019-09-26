#include "holberton.h"
/**
 * print_square - Print a square of hashtags.
 * @size: The param of input of size
 */

void print_square(int size)
{
	int x, y;

	if (!(size <= 0))
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
