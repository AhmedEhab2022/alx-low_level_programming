#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list.
 *
 * @head: The head of a list_t list.
 *
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		free(tmp->str);
		head = head->next;
		free(tmp);
	}
}
