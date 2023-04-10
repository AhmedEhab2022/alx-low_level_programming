#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	int x = 1;
	char *ptr = (char *) &x;

	if (*ptr == 1)
		return (1);
	return (0);
}
