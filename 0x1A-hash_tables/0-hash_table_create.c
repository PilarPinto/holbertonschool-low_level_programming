#include "hash_tables.h"
/**
 * hash_table_create - Create the mem space for a HT
 * @size: Is the Hash Table amount of indexes
 * Return: The new table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	if (size > 0)
	{
		new_table = malloc(sizeof(hash_table_t));
		if (new_table == NULL)
			return (NULL);

		return (new_table);
	}
	return (NULL);
}
