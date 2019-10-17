#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - Return the array in the range
 * @min: Is the minimun element
 * @max: Is the maximum element
 *
 * Return: Array with the range.
 */
int *array_range(int min, int max)
{
	int *ar;
	int i, x;

	if (min > max)
	{
		return (NULL);
	}

	x = max - min;
	ar = malloc((x + 1) * sizeof(int));

	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= x ; i++, min++)
	{
		ar[i] = min;
	}
	return (ar);
}
