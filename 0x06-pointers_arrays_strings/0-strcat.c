#include <stdio.h>

/**
 * *_strcat- Concatenate two strings.
 * @dest: Is the char array with 98 slots.
 * @src: Is the source array that want to storage in dest
 * Return: Dest string.
 */
char *_strcat(char *dest, char *src)
{

	int i = 0, ind;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (ind = 0; src[ind] != '\0'; ind++)
	{
		dest[i++] = src[ind];
	}
	return (dest);
}
