#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 *
 * @h: The Head of Linked list.
 *
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;
	const listint_t *ptr = NULL;

	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
