#include <stdio.h>

/**
 * swap_int - Swap the values of both params.
 * @a: Param a
 * @b: Param b
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
