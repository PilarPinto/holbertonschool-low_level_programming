#include "holberton.h"
/**
 * get_endianness - Check the kind of endian
 * Return: 1 if little or 0 if big endian
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *ch = (char *)&n;

	if (*ch)
		return (1);
	else
		return (0);
}
