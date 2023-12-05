#include "hash_tables.h"

/**
* hash_table_delete - deletes a hash table
* @ht: hash table
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	hash_node_t *tmp, *node;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node != NULL)
		{
			tmp = node;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			node = node->next;
		}
	}
	free(ht->array);
	free(ht);
}
