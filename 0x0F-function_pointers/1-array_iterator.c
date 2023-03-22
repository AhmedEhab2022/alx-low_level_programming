#include "stdlib.h"
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as 
 * a parameter on each element of an array.
 *
 * @array: The array of integers numbers.
 * @size: The size of the array.
 * @action: pointer to the function you need to use.
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
