#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - Print any natural to 98.
 * @n: parameter of natural number
 * Return: Always 0.
 */

void print_to_98(int n)
{
	int i = 0;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (!(i == 98))
				printf("%d, ", i);
			else
				printf("%d", i);
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (!(i == 98))
				printf("%d, ", i);
			else
				printf("%d", i);
		}
		printf("\n");
	}
}
