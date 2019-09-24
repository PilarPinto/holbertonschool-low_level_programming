#include "holberton.h"
/**
 *print_sign- the case define negative, neutral and possitive numbers
 * @n: is the parameter
 *Return: 'a' value
 */
int print_sign(int n)
{
	int a;

	if (n > 0)
	{
		a = 1;
		putchar('+');
	}
	else if (n == 0)
	{
		a = 0;
		putchar('0');
	}
	else if (n < 0)
	{
		a = -1;
		putchar('-');
	}
	return (a);
}
