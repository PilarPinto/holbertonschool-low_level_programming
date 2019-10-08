#include <stdio.h>

/**
 * _sqrt_look - Look for a number coincident.
 * @a: The number to find
 * @b: The number of the param
 * Return: Result of the number
 */

int _sqrt_look(int a, int b)
{
	if (a * a == b)
		return (a);
	else if (a * a > b)
		return (-1);
	else
		return (_sqrt_look(a + 1, b));
}

/**
 * _sqrt_recursion - Set the initial conditions.
 * @n: The number to find the sqrt
 *
 * Return: The return of function
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_look(1, n));
}
