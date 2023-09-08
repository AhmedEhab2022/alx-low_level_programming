#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: the hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *tmp;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			tmp = node;
			free(tmp->key);
			free(tmp->value);
			node = node->next;
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
