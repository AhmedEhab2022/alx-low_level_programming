#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 *
 * @n: Pointer to unsigned long integer number.
 * @index: The index, starting from 0 of the bit you want to set.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 24)
		return (-1);

	if (*n != 0)
		*n -= (1 << index);

	return (1);
}
