#include "main.h"

/**
 * _memcpy - Copy memory area with n bytes
 *
 * @dest: The first memory area
 * @src: The seconed memory area
 * @n: The number of bytes
 *
 * Return: dest after copy n bytes from src to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
