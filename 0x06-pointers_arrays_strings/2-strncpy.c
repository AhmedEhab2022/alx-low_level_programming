#include "main.h"

/**
 * _strncpy - copy n characters from string 2 to string 1
 *
 * @dest: The first string
 * @src: The seconed string
 * @n: The number of characters
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
			dest[i] = src[i];
	if (src[i] == '\0' && i < n )
	{
		for (; i < n; i++)
			dest[i] = '\0';
	}
	return (dest);
}
