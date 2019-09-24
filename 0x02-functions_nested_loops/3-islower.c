#include "holberton.h"
/**
*_islower- the case with a of some letters and c is the parameter
* @c: is the parameter
*Return: 'a' value
*/
int _islower(int c)
{
	int a;

	if (islower(c))
	{
		a = 1;
	}
	else
	{
		a = 0;
	}
	return (a);
}
