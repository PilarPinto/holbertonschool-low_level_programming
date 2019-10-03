#include <stdio.h>

/**
 * _strncpy - Concatenate two strings.
 * @dest: Is the char array with 98 slots.
 * @src: Is the source array that want to storage in dest
 * @n: number of elements of the src
 * Return: Dest string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
