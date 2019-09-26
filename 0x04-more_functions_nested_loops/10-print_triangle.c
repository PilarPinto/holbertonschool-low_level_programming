#include "holberton.h"
/**
 * print_triangle - Print a square of hashtags minus a triangle.
 * @size: The param of input of size
 */
void print_triangle(int size)
{
	int x, y;

	if (!(size <= 0))
	{
		for (x = 1; x <= size; x++)
		{
			for (y = 1; y <= size; y++)
			{
				if (y <= size - x)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
}
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
