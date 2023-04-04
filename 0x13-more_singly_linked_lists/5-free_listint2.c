#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a list_t list.
 *
 * @head: The head of a list_t list.
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	head = NULL;
}
