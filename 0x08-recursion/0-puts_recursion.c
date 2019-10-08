#include <stdio.h>
#include "holberton.h"
/**
 * _puts_recursion - Print a string recursively.
 * @s: The string to print
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
		_putchar('\n');
}
