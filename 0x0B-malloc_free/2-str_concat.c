#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Function that concatenates two strings
 *
 * @s1: The first string
 * @s2: The seconed string
 *
 * Return: pointer should point to a newly allocated space in memory
 * which contains the contents of s1 concatenate with s2
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;
	p = malloc((i + j + 1) * sizeof(char));
	if (p == NULL)
	{
		p = '\0';
		return (p);
	}
	while (s1[k] != '\0')
	{
		p[k] = s1[k];
		k++;
	}
	while (s2[l] != '\0')
	{
		p[k] = s2[l];
		l++;
		k++;
	}
	p[k] = '\0';
	return (p);
}
