#include <stdio.h>

/**
 * _strcmp - Compare two strings.
 * @s1: Is the char array oh Hello.
 * @s2: Is the source array that want to storage in dest
 *
 * Return: Difference of indexes content.
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
