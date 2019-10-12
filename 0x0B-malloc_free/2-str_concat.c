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
/**
 * *_strcat- Concatenate two strings.
 * @s1: Is the first string.
 * @s2: Is the second string
 * Return: The first + second.
 */
char *str_concat(char *s1, char *s2)
{
	char *ar;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ar = malloc((_strlen(s1) + _strlen(s2) * 1) + 1);
	if (ar == '\0')
	{
		return(NULL);
	}

	_strcat(ar, s1);
	_strcat(ar, s2);
	return (ar);
}
