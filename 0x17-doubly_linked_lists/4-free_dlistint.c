#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: the head of dlistint_t list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head && head->prev)
		head = head->prev;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
