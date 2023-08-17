#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 *
 * @head: double pointer to the head of dlistint list
 * @n: the integer value that should be set to the new head
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *ptr;

	ptr = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	while (ptr && ptr->prev)
		ptr = ptr->prev;

	if (ptr != NULL)
		ptr->prev = new_node;

	new_node->next = ptr;
	*head = new_node;
	return (new_node);
}
