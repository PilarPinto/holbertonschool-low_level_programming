#include "holberton.h"

/**
 * print_rev - check the size of the string and reverse.
 * @s: Is the string parameter
 *
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	while (s[i])
	{
		len++;
		i++;
	}
	for (i = len; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
