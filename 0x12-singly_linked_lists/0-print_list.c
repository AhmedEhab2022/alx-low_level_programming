#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list_t list.
 *
 * @h: The Head of Linked list.
 *
 * Return: The number of nodes, If str is NULL, print [0] (nil).
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;
	const list_t *ptr = NULL;

	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", ptr->len, ptr->str);

		ptr = ptr->next;
		count++;
	}
	return (count);
}
