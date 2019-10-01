#include <stdio.h>
#include "holberton.h"

/**
 * print_array - print a elements of an array.
 * @a: the array in a parameter
 * @n: Is the length of the array
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d,  ", a[i]);
		}
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
