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
 * *string_nconcat- Concatenate two strings.
 * @s1: Is the first string.
 * @s2: Is the second string
 * @n: The number of elements
 * Return: ar the first + second.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ar = malloc(_strlen(s1) + n + 1);
	if (ar == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ar[i] = s1[i];
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		ar[i] = s2[j];
		i++;
	}
	return (ar);
}
