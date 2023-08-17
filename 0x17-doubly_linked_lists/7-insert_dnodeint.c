#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 *
 * @h: pointer to head of a dlistint_t list
 * @idx: the index of inserted node
 * @n: the integer value to set to new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *curr, *new_node, *last;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	curr = *h;
	for (i = 0; i < idx && curr; ++i)
	{
		last = curr;
		curr = curr->next;
	}
	if (curr == NULL && i == idx)
		return (add_dnodeint_end(h, n));

	if (curr == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = curr;
	new_node->prev = last;
	last->next = new_node;
	curr->prev = new_node;
	return (new_node);
}
