#include "main.h"
#include <stdio.h>

/**
 * print_array - Display n elements of an array of integers
 *
 * @a: The array
 * @n: Elements of an array
 */
void print_array(int *a, int n)
{
	int i;

	if (n < 1)
		printf("\n\n");
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i == n - 1)
				printf("%d\n", a[i]);
			else
				printf("%d, ", a[i]);
		}
	}
}
