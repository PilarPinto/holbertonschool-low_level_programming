#include <stdio.h>

/**
 * _is_prime - Look for a number coincident.
 * @n1: The number of divisor
 * @n2: The number of param
 * Return: the condition is prime
 */

int _is_prime(int n1, int n2)
{
	if (n1 == n2)
		return (1);
	if (n2 % n1 == 0 || n2 <= 1)
		return (0);
	else
		return (_is_prime(n1 + 1, n2));
}

/**
 * is_prime_number - Return the 0 or 1.
 * @n: The number to find the sqrt
 *
 * Return: The return of function
 */

int is_prime_number(int n)
{
	return (_is_prime(2, n));
}
