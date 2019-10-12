#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -Create an array with dinamyc alocation.
 * @size:The size of the array that be alocated.
 * @c: The char to be stored in every element
 * Return: ar the array created.
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;
	if (size == 0)
	{
		return(NULL);
	}

	ar = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		if (ar == NULL)
		{
			return(NULL);
		}
		ar[i] = c;
	}
	return(ar);
}
