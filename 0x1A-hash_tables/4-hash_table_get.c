#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: Is the reference to the hash table
 * @key: Is the key to map
 * Return: The value associated
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int ind;
	hash_node_t *new_ele;

	if (!(ht == NULL || key == NULL || strlen(key) == 0))
	{
		ind = key_index((unsigned char *)key, ht->size);
		for (new_ele = ht->array[ind]; new_ele != NULL; new_ele = new_ele->next)
		{
			if (strcmp(new_ele->key, key) == 0)
				return (new_ele->value);
		}
		return (NULL);
	}
	return (NULL);
}
