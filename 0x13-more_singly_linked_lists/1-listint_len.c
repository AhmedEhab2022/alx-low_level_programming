#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - Calculates the number of elements in a linked listint_t list.
 *
 * @h: The Head of Linked list_t list.
 *
 * Return: the number of elements in a linked listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = NULL;
	unsigned int count;

	count = 0;
	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
