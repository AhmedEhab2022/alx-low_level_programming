#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: The string
 *
 * Return: A pointer to a new string which is a duplicate of the string str,
 * NULL if str = NULL or insufficient memory was available
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int i = 0;
	unsigned int j = 0;

	if (str == NULL)
	{
		p = '\0';
		return (p);
	}
	while (str[i] != '\0')
		i++;
	p = malloc((i + 1) * sizeof(char));
	if (p == NULL)
	{
		p = '\0';
		return (p);
	}
	while (str[j] != '\0')
	{
		p[j] = str[j];
		j++;
	}
	p[j] = '\0';
	return (p);
}
