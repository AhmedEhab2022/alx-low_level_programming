#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: The size of array
 * @c: The character that fill the array
 *
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		p = '\0';
		return (p);
	}

	p = malloc(size * sizeof(char));

	if (p == NULL)
	{
		p = '\0';
		return (p);
	}

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}
