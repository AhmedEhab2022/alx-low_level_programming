#include "main.h"

/**
 * _memset - Fill memory with a constant byte
 *
 * @s: The area memory
 * @b: The constant byte
 * @n: The number of bytes
 *
 * Return: The memory area 's'
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
