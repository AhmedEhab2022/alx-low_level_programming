#include "search_algos.h"

/**
 * print_array - Prints the elements of the array
 *
 * @array: a pointer to the first element of the array to search in
 * @low: the start index to be printed
 * @high: the end index to be printed
 *
 * Return: Nothing
 */
void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i < high; i++)
	{
		printf("%i", array[i]);
		if (i < high - 1)
			printf(", ");
		else
			printf("\n");
	}
}


/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l, h, mid;

	if (array == NULL)
		return (-1);

	l = 0;
	h = size - 1;
	while (l <= h)
	{
		print_array(array, l, h + 1);
		mid = (l + h) / 2;
		if (value > array[mid])
			l = mid + 1;

		else if (value < array[mid])
			h = mid - 1;

		else
			return (mid);
	}
	return (-1);
}
