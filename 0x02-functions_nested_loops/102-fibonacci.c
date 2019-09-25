#include <stdio.h>

/**
 * main - Print first 50 fibonacci numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long a = 0;
	long b = 1;
	long acum;
	int i;

	for (i = 0; i < 50; i++)
	{
		acum = a + b;
		a = b;
		b = acum;
		if (!(i == 49))
			printf("%ld, ", acum);
		else
			printf("%ld\n", acum);
	}
	return (0);
}
