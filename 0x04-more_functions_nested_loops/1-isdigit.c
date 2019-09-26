#include "holberton.h"

/**
 * _isdigit - Function to found the digit characters.
 * @c: Is the param.
 * Return: 1 when the character of the main is a digit, 0 in other cases.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	else
		return (0);
}
