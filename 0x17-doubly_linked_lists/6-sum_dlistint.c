#include "lists.h"

/**
 * sum_dlistint - returns the sum of all (n) of a dlistint_t linked list
 *
 * @head: the head of dlistint_t list
 *
 * Return: the sum of all (n), if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curr;
	int sum;

	while (head && head->prev)
		head = head->prev;

	curr = head;
	sum = 0;
	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
