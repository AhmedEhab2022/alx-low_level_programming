#include "stdlib.h"
#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Searches for an integer.
 *
 * @array: Array of integers.
 * @size: Size of array.
 * @cmp: Pointer to the function to be used to compare values.
 *
 * Return: Index of the first element
 * for which the cmp function does not return 0,
 * If no element matches, return -1,
 * If size <= 0, return -1.
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
