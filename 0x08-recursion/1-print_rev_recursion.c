#include <stdio.h>
#include "holberton.h"
/**
 * _print_rev_recursion - Print a mirror string recursively.
 * @s: The string to print
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
