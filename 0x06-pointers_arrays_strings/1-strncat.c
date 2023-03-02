#include "main.h"

/**
 * _strncat - Concatenate two strings with n bytes
 *
 * @dest: The first string
 * @src: The seconed string
 * @n: The number of bytes
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	int k = 0;

	while (dest[k] != 0)
		k++;
	i = k;
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
