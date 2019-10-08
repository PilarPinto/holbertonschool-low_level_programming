#include <stdio.h>

/**
 * _pow_recursion - Print the result of the power.
 * @x: The base
 * @y: The number of exponent
 * Return: Result of the Power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
