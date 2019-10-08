#include <stdio.h>

/**
 * _strlen_recursion - Print lenght.
 * @s: The string to print
 * Return: the counter
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if(*s != '\0')
	{
		count = _strlen_recursion(s + 1);
		count++;
	}
	return (count);
}
