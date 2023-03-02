#include "main.h"

/**
 * reverse_array - Reverse the content of an array of integers
 *
 * @a: The array
 * @n: The number of elements
 */
void reverse_array(int *a, int n)
{
	int i, temp;
	int i_ele = n - 1;

	for (i = 0; i <= n / 2 ; i++)
	{
		temp = a[i_ele];
		a[i_ele] = a[i];
		a[i] = temp;
		i_ele--;
	}
}
