#include "hash_tables.h"

/**
 * create_item - creates an item to store it in hash table
 *
 * @key: the key. key can not be an empty string
 * @value: the value associated with the key.
 * value must be duplicated. value can be an empty string
 *
 * Return: pointer to item if it succeeded, NULL otherwise
 */
hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *item;

	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (NULL);

	item->key = malloc(strlen(key) + 1);
	if (item->key == NULL)
	{
		free(item);
		return (NULL);
	}
	item->value = malloc(strlen(value) + 1);
	if (item->value == NULL)
	{
		free(item->key);
		free(item);
		return (NULL);
	}
	strcpy(item->key, key);
	strcpy(item->value, value);
	return (item);
}

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: poiner to the hash table you want to add or update the key/value to
 * @key: the key. key can not be an empty string
 * @value: the value associated with the key.
 * value must be duplicated. value can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *item;

	if (key == NULL || strcmp(key, "") == 0 || value == NULL)
		return (0);

	item = create_item(key, value);
	if (item == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		item->next = NULL;
		ht->array[index] = item;
	}
	else if (strcmp(ht->array[index]->key, key) == 0)
		strcpy(ht->array[index]->value, value);

	else
	{
		item->next = ht->array[index];
		ht->array[index] = item;
	}
	return (1);
}
