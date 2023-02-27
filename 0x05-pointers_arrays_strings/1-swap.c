#include "main.h"

/**
 * swap_int - Swap two integers by pointers
 *
 * @a: The pointer of the first number
 * @b: The pointer of the second number
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
