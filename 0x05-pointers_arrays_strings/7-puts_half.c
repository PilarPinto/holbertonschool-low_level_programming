#include "holberton.h"

/**
 * puts_half - check the second half of the array.
 * @str: The input string
 *
 */

void puts_half(char *str)
{
	int len = 0;
	int i;
	int n;

	while (str[i])
	{
		len++;
		i++;
	}
	if ((len % 2) == 0)
		n = len / 2;

	else
		n = (len - 1) / 2;

	for (i = n; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
