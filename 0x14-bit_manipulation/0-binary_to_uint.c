#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 *
 * @b: A pointing to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec;
	int i, len;

	dec = i = len = 0;

	if (b == NULL || *b == '\0')
		return (0);

	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if (b[i] == '1')
			dec += (1 * (1 << (len - 1 - i)));
	}
	return (dec);
}
