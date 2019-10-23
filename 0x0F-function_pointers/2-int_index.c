#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Return the index if true
 * @array: Is the pointer to an array
 * @size: Is the size of the array
 * @cmp: Is the pointer function
 *
 * Return: -1 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
