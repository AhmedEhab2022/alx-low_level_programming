#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 *
 * @head: double pointer to the haed of the dlistint list
 * @n: the integer value to set to new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *ptr, *curr_head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	ptr = *head;
	while (ptr && ptr->next)
		ptr = ptr->next;

	new_node->prev = ptr;
	if (ptr != NULL)
		ptr->next = new_node;

	curr_head = *head;
	while (curr_head && curr_head->prev)
		curr_head = curr_head->prev;

	if (curr_head != NULL)
		*head = curr_head;
	else
		*head = new_node;

	return (new_node);
}
