#include "search_algos.h"
/**
 * linear_search - Is an algorithm
 * @array: Is the input array
 * @size: Is the sizeof thearray
 * @value: Is the value of the array
 * Return: -1 if NUll or index otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int ind;

	if (array)
	{
		for (ind = 0; ind < size; ind++)
		{
			printf("Value checked array[%d] = [%d]\n", ind, array[
				       ind]);
			if (array[ind] == value)
			{
				return (ind);
			}
		}
	}
	return (-1);
}
