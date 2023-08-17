#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 *
 * @h: pointer to the head node of doublylinked list
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t no_nodes;
	const dlistint_t *ptr = h;

	no_nodes = 0;
	while (ptr)
	{
		no_nodes++;
		ptr = ptr->next;
	}
	return (no_nodes);
}
