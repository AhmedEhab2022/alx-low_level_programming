#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index
 *
 * @head: pointer to head of a dlistint_t linked list
 * @index: the index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *curr, *last;

	if (*head == NULL)
		return (-1);

	curr = *head;
	last = *head;
	if (index == 0)
	{
		(*head) = curr->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(curr);
		return (1);
	}
	for (i = 0; curr && i < index; ++i)
	{
		last = curr;
		curr = curr->next;
	}
	if (curr == NULL && i == index)
	{
		curr = last;
		last = last->prev;
		if (last != NULL)
			last->next = NULL;
		free(curr);
		return (1);
	}
	if (curr == NULL)
		return (-1);

	curr = curr->next;
	curr->prev = last;
	last->next = curr;
	curr = curr->prev;
	free(curr);
	return (1);
}
