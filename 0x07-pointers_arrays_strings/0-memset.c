#include <stdio.h>

/**
 * _memset - prints buffer in hexa and change values
 * @s: the array
 * @b: The format of element
 * @n: Number of elements
 * Return: changed array.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
