#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *
 * @ht: the hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int flag;
	hash_node_t *node;

	if (ht == NULL)
		return;

	flag = 0;
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (flag)
				printf(", ");

			printf("'%s': '%s'", node->key, node->value);
			flag = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
