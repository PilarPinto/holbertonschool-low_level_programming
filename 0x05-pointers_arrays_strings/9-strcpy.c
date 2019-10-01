#include <stdio.h>

/**
 * *_strcpy - check the code for Holberton School students.
 * @dest: char array of destiny
 * @src: Is the source array
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
