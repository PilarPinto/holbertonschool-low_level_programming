#include "holberton.h"
/**
 * _strlen - check the length of the string.
 * @s: param of the pointer of the string
 * Return: 10 the length.
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; len <= *s; len++)
	{
		if (*s != '\0')
		{
			s++;
		}
	}
	return (len);
}
