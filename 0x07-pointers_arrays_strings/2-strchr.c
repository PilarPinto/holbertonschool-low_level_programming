#include <stdio.h>
#include "holberton.h"
/**
 * _strchr - prints a cropped array
 * @s: the array
 * @c: The char to compare
 * Return: Cropped array.
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (&*s);
		}
		s++;
	}
	return('\0');
}
