#include <stdio.h>

/**
 * factorial - Print the result of factorial.
 * @n: The number
 * Return: Result of a factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
