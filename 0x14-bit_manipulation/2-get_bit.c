#include "main.h"
#include <stdlib.h>

/**
 * get_bit - Returns the value of a bit at a given index.
 *
 * @n: The decimal number.
 * @index: The index, starting from 0 of the bit you want to get.
 *
 * Return: The value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	char *bin;
	unsigned int i = 0;

	bin = malloc(sizeof(char) * 303030);

	if (bin == NULL)
		return (-1);

	while (n > 0)
	{
		bin[i] = (n % 2) + '0';
		n /= 2;
		i++;
	}
	if (bin[index] == '0')
		return (0);
	else
		return (1);
}
