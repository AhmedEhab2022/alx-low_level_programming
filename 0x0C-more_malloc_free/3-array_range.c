#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 *
 * @min: Lower value in array.
 * @max: Highest value in array.
 *
 * Return: Pointer to the newly created array, NULL otherwise.
 */
int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * ((max - min) + 1));

	if (p == NULL)
		return (p);

	for (i = 0; min < max; i++)
	{
		p[i] = min;
		min++;
	}

	p[i] = max;
	return (p);
}
