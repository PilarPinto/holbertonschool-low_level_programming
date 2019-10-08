#include "holberton.h"

/**
 * _puts_recursion - Print a string recursively
 * @s: The string to print
 *
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar (*s);
		_puts_recursion(++s);
	}
	else
		putchar ('\n');
}
