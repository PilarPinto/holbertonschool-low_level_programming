#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Is an array the uses a function pointer to iterate
 * @array: Is the pointer to an array
 * @size: Is the size of  array
 * @action: Is the pointer function
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
