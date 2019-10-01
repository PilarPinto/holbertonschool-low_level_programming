#include "holberton.h"
/**
 * _strlen - check the length of the string.
 * @s: param of the pointer of the string
 * Return: 10 the length.
 */

int _strlen(char *s)
{
	int len;
	while (s[len] != '\0')
		len++;
	return (len);
}
