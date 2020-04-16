#include "search_algos.h"
/**
 * find_middle - Binary search algortihm middle part
 * @array: Is the input array
 * @low: Is the lowest number
 * @high: Is the highest number
 * @size: Is the array size
 * @value: Is the value
 * Return: -1 or the value
 */
int find_middle(int *array, int low, int high, size_t size, int value)
{
	int mid;
	int ind = 0;

	low = 0;
	high = size - 1;

	if (array != NULL)
	{
		while (low <= high)
		{
			mid = (low + high) / 2;
			printf("Searching in array: ");
			for (ind = low; ind <= high; ind++)
			{
				if (ind == high)
					printf("%d", array[ind]);
				else
					printf("%d, ", array[ind]);
			}
			printf("\n");
			if (value < array[mid])
				high = mid - 1;
			else if (value > array[mid])
				low = mid + 1;
			else if (value == array[mid])
				return (mid);
		}
	}
	return (-1);
}

/**
 * binary_search - Binary search algortihm
 * @array: Is the input array
 * @size: Is the array size
 * @value: Is the value
 * Return: -1 orvalue of the index finded
 */
int binary_search(int *array, size_t size, int value)
{
	int min, max;

	if (array == NULL)
		return (-1);
	min = 0;
	max = size - 1;
	return (find_middle(array, min, max, size, value));
}
