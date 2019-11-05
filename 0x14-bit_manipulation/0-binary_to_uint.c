#include <stdio.h>
/**
 * binary_to_uint - Convert from binary to unsigned int.
 * @b: Is the binary string
 * Return: The decimal number.
 */
unsigned int binary_to_uint(const char *b)
{
	int n;
	int ind, len = 0, acum = 0;

	if (b == NULL)
		return (0);

	while (b[len])
	{
		if (((b[len] - '0') != 0) && ((b[len] - '0') != 1))
		 	return (0);
		len++;
	}

	for (n= len - 1, ind = 0; n >= 0; --n)
	{
		acum += (b[n] - '0') << ind;
		ind++;
	}
	return (acum);
}
