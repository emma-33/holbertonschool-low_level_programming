#include "hash_tables.h"

/**
* hash_table_set - adds an element to the hash table
* @ht: hash table you want to add / update the key/value to
* @key: key
* @value: value associated with the key
* Return: 1 on success, 0 on failure
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *tmp;

	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[i];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			tmp->value = strdup(value);
			if (tmp->value == NULL)
			{
				free(tmp->value);
				return (0);
			}
			return (1);
		}
		tmp = tmp->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[i];
	ht->array[i] = new_node;

	return (1);
}
