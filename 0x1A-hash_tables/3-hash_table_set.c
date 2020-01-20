#include "hash_tables.h"
/**
 * hash_table_set -function that adds an element to the HT
 * @ht: Reference to hash table
 * @key:Is the key that will to map
 * @value:Is the value of each key
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int ind;
	hash_node_t *map_node;

	if (ht == NULL || key == NULL || key == '\0')
		return (0);

	ind = key_index((const unsigned char *) key, ht->size);

	if (ht->array[ind] != NULL)
	{
		if (strcmp(ht->array[ind]->key, key) == 0)
		{
			ht->array[ind]->value = strdup(value);
			return (1); 
		}
	}
	map_node = malloc(sizeof(hash_node_t *));

	if(map_node == NULL)
		return(0);

	map_node->key = strdup(key);
	map_node->value = strdup(value);

	if(ht->array[ind] == NULL)
	{
		map_node->next = NULL;
	}
	else
	{
		map_node->next = ht->array[ind];
	}
	ht->array[ind] = map_node;
	return(1);
}
