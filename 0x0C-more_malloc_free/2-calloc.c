#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array, using malloc.
 *
 * @nmemb: Number of elements.
 * @size: Size of each elements.
 *
 * Return: Pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		p = '\0';
		return (p);
	}

	p = malloc(nmemb * size);

	if (p == NULL)
		return (p);

	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;

	return (p);
}
