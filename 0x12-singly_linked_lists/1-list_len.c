#include "lists.h"
#include <stdlib.h>

/**
 * list_len - Calculates the number of elements in a linked list_t list.
 *
 * @h: The Head of Linked list_t list.
 *
 * Return: Number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr = NULL;
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
