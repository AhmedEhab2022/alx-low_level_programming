#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 *
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to a 2 dimensional array of integers, NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **p, i, j;

	if (width < 1 || height < 1)
	{
		p = '\0';
		return (p);
	}

	p = malloc(height * sizeof(int *));
	if (p == NULL)
		return (p);
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			for (j = 0; j < width; j++)
				free(p[j]);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}
