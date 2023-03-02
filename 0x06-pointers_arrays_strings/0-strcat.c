#include "main.h"

/**
 * _strcat - Concatenate two strings
 *
 * @dest: The first string
 * @src: The seconed string
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j, k;

	k = 0;

	while (dest[k] != '\0')
	{
		k++;
	}
	i = k;
	for (j = 0; src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
