#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 *
 * @head: The head of a list_t list.
 * @index: The index of the required node.
 *
 * Return: The nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *req_node;
	unsigned int i = 0;

	req_node = head;
	while (req_node != NULL)
	{
		if (i == index)
		{
			return (req_node);
		}
		req_node = req_node->next;
		i++;
	}
	return (NULL);
}
