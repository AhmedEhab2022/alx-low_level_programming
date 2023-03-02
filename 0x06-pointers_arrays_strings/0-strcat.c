#include "main.h"
#include "2-strlen.c"

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
	int i, j;
	char *res = dest;

	i = _strlen(dest);
	for (j = 0; src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (res);
}
