#include "holberton.h"
/**
 *_isalpha- the case define all letters Upper and lowe
 * @c: is the parameter
 *Return: 'a' value
 */
int _isalpha(int c)
{
	int a;

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		a = 1;
	}
	else
	{
		a = 0;
	}
	return (a);
}
