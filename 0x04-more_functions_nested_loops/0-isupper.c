#include "holberton.h"

/**
 * _isupper - Function to found the uppercase characters.
 * @c: Is the paarm.
 * Return: 1 when the character of the main is Upper, 0 in other cases.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	else
		return (0);
}
