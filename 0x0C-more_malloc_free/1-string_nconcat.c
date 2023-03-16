#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Function that concatenates two strings
 * with n bytes in string two.
 *
 * @s1: string one
 * @s2: string two
 * @n: number of bytes
 *
 * Return: pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null terminated.
 * If the function fails, it should return NULL.
 * If n is greater or equal to the length of s2 then use the entire string s2.
 * if NULL is passed, treat it as an empty string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, k;

	k = 0;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";

	while (s1[k] != '\0')
		k++;

	p = malloc(sizeof(char) * ((k + n) + 1));

	if (p == NULL)
		return (p);

	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];

	for (j = 0; (j < n) && (s2[j] != '\0'); j++, i++)
		p[i] = s2[j];

	p[i] = '\0';
	return (p);
}
