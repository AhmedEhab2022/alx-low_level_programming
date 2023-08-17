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
	unsigned int i, len;
	dlistint_t *curr, *last, *new_node, *tmp;

	if (h == NULL)
		return (NULL);
	len = 0;
	tmp = *h;
	while (tmp)
	{
		len++;
		tmp = tmp->next;
	}
	if (idx == 0)
		return (add_dnodeint(h, (const int)n));

	else if (len - 1 == idx)
		return (add_dnodeint_end(h, (const int)n));

	else if (idx >= len)
		return (NULL);

	while (*h && (*h)->prev)
		(*h) = (*h)->prev;
	curr = *h;
	last = *h;
	for (i = 0; i < idx && curr; ++i)
	{
		last = curr;
		curr = curr->next;
	}
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
