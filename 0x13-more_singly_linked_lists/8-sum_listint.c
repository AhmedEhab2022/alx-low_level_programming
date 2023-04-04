#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Calculate The sum of all the data(n)
 * of a listint_t linked list.
 *
 * @head: The Head of Linked list.
 *
 * Return: The sum of all the data (n) of a listint_t linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
