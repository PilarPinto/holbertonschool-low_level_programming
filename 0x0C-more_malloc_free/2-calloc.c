#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_calloc - Concatenate two strings.
 * @nmemb: The number of elements.
 * @size: The size of variable
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int i;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}

	ar = malloc(size * nmemb);

	for (i = 0; i < size * nmemb; i++)
	{
		if (ar == NULL)
		{
			return (NULL);
		}
		ar[i] = 0;
	}
	return (ar);
}
