#include "holberton.h"
/**
 * puts2 - Check the even indexes of array
 * @str: Is the input array param.
 *
 */
void puts2(char *str)
{
	int len = 0;
	int i;

	while (str[i])
	{
		len++;
		i++;
	}
	for (i = 0; i < len; i = i + 2)
		_putchar(str[i]);
	_putchar('\n');
}
