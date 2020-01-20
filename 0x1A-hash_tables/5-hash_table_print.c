#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: Is the reference to hast table *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int ind;
	hash_node_t *new_ele;
	int flag = 0;

	if (!ht)
		return;
	printf("{");

	for (ind = 0; ind < ht->size; ind++)
	{
		if (ht->array[ind] != NULL)
		{
			if (flag == 1)
				printf(", ");
			new_ele = ht->array[ind];
			while (new_ele != NULL)
			{
				printf("'%s': '%s'", new_ele->key, new_ele->value);
				new_ele = new_ele->next;
				if (new_ele == NULL)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}
