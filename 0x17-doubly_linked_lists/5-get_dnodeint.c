#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 *
 * @head: the head of the dlistint_t list
 * @index: the index of the node that function returns it
 *
 * Return: the address of the node in the given index, NULL otherwise
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr;
	unsigned int i;

	while (head && head->prev)
		head = head->prev;

	curr = head;
	for (i = 0; i < index && curr; ++i)
		curr = curr->next;

	return (curr);
}
