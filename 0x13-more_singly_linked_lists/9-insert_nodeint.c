#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 *
 * @head: The Head of Linked list.
 * @idx: The index of the list where the new node should be added.
 * @n: The data of the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	tmp = *head;
	if (idx != 0)
	{
		for (; i < idx - 1 && tmp != NULL; i++)
			tmp = tmp->next;
	}
	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
