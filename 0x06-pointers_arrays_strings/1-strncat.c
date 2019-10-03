#include <stdio.h>

/**
 * _strncat - Concatenate two strings.
 * @dest: Is the char array with 98 slots.
 * @src: Is the source array that want to storage in dest
 * @n: number of elements of the src
 * Return: Dest string.
 */
char *_strncat(char *dest, char *src, int n)
{

	int i = 0, ind;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (ind = 0; ind < n && src[ind] != '\0'; ind++)
	{
		dest[i + ind] = src[ind];
	}
	return (dest);
}
