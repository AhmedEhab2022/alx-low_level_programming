#include "main.h"
#include "2-strlen.c"

/**
 * _strcpy - copy string
 *
 * @dest: The copy of string
 * @src: The string
 *
 * Return: dest (the copy of string)
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int j = _strlen(src);

	for (i = 0; i <= j; i++)
		dest[i] = src[i];
	return (dest);
}
