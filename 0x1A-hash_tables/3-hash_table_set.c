#include "hash_tables.h"
/**
 * link_nodes-Create a linked nodes
 * @key: Is the key to map
 * @value:Is the value from the key
 * Return: The new linked element
 */
hash_node_t *link_nodes(const char *key, const char *value)
{
	hash_node_t *new_element;

	new_element = malloc(sizeof(hash_table_t *));
	if (new_element == NULL)
		return (NULL);
	new_element->key = strdup(key);
	if (new_element->key == NULL)
		return (NULL);
	new_element->value = strdup(value);
	if (new_element->value == NULL)
		return (NULL);
	return (new_element);
}

/**
 * hash_table_set -function that adds an element to the HT
 * @ht: Reference to hash table
 * @key:Is the key that will to map
 * @value:Is the value of each key
 * Return: 1 if is succes 0 is not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int ind;
	hash_node_t *map_node, *j;

	if (ht == NULL || key == NULL || value == '\0')
		return (0);

	ind = key_index((const unsigned char *) key, ht->size);

	for (j = ht->array[ind]; j != NULL; j = j->next)
	{
		if ((strcmp(j->key, key) == 0) && (strcmp(j->value, value) != 0))
		{
			free(j->value);
			j->value = strdup(value);
			if (j->value == NULL)
				return (0);
		}
		return (1);
	}
	map_node = link_nodes(key, value);

	if (map_node == NULL)
		return (0);
	map_node->next = ht->array[ind];
	ht->array[ind] = map_node;
	return (1);
}
