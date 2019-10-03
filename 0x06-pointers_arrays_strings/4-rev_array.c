#include <stdio.h>

/**
 * reverse_array - Reverse a string.
 * @a: Is the char array oh Hello.
 * @n: Is the source array that want to storage in dest
 */
void reverse_array(int *a, int n)
{
	int temp, i = 0;

	for (i = n - 1; i >= n / 2; i--)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
