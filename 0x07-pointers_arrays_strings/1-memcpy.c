#include <stdio.h>

/**
 * _memcpy - prints array into another
 * @dest: the destinity array
 * @src: The source array
 * @n: Number of elements
 * Return: changed destiny array.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
