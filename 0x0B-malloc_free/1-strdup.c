#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - check the length of the string.
 * @s: param of the pointer of the string
 * Return: 10 the length.
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * *_strcpy - check the code for Holberton School students.
 * @dest: char array of destiny
 * @src: Is the source array
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * *_strdup - Funtion that return newly alocated space.
 * @str: char array of destiny
 * Return: The pointer to dest.
 */
char *_strdup(char *str)
{
	char *ar;

	if (str == '\0')
		return (NULL);

	ar = malloc((_strlen(str) * 1) + 1);

	if (ar == '\0')
		return (NULL);

	_strcpy(ar, str);
	return (ar);
}
