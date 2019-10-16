#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - check the malloc size.
 * @b: The amount of bytes
 * Return: Nothing.
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ar;

	ar = malloc(b);
	if (ar == NULL)
	{
		exit(98);
	}
	return (ar);
}
