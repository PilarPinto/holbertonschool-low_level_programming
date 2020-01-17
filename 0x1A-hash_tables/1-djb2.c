#include "hash_tables.h"
/**
 * hash_djb2 - Implementing the djb2 algorithm
 * @str: The param is a string
 * Return: A hash description
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
