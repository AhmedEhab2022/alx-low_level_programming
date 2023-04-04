#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at index index
 * of a listint_t linked list.
 *
 * @head: Pointer to head of Linked list.
 * @index: The index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp, *req_node;

	if (*head == NULL)
		return (-1);

	tmp = *head;
	if (tmp == NULL)
		return (-1);

	if (index != 0)
	{
		for (; i < index - 1 && tmp != NULL; i++)
		{
			if (tmp == NULL)
				return (-1);

			tmp = tmp->next;
		}
	}
	else if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	req_node = tmp->next;
	tmp->next = req_node->next;
	free(req_node);
	return (1);
}
