#include <stdio.h>

/**
 * main - Print first 50 fibonacci numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long c = 3;

	printf("%lu, ", a);
	printf("%lu, ", b);
	printf("%lu, ", c);
	for (int i = 0; i < 47; i++)
	{
		a = b + c;
		b = c;
		c = a;
		if (!(i == 46))
			printf("%lu, ", a);
		else
			printf("%lu\n", a);
	}
	return (0);
}
