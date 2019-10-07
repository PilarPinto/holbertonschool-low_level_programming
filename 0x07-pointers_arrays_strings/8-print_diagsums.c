#include <stdio.h>

/**
 * print_diagsums - prints the sum diagonal
 * @a: The matrix of letter
 * @size: The size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int acum1 = 0, acum2 = 0;

	for (i = 0;  i < size; i++)
		acum1 += a[(size + 1) * i];
	for (j =  0; j < size; j++)
		acum2 += a[(size - 1) * (j + 1)];
	printf("%d, %d\n",  acum1, acum2);
}
