#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: the head of dlistint_t list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head->next)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
