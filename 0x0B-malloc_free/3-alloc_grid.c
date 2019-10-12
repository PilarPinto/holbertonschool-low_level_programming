#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - createa matrix with malloc.
 * @width: param of the pointer of the string
 * @height:THe height of the matrix
 * Return: The matrix.
 */

int **alloc_grid(int width, int height)
{
	int **matrix, x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrix = malloc(height * sizeof(int *));

	for (x = 0; x < height; x++)
	{
		matrix[x] = malloc(width * sizeof(int *));
		for (y = 0; y < width; y++)
		{
			if (matrix == NULL)
				return (NULL);
			matrix[x][y] = 0;
		}
	}
	return (matrix);
}
