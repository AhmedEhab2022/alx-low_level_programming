#include "main.h"

/**
 * _strcmp - compair two strings
 *
 * @s1: The first string
 * @s2: The second string
 *
 * Return: >0 if first char is less than second equal, 0 if are equal
 * otherwise <0
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] > s2[i])
			return (15);
		else if (s2[i] > s1[i])
			return (-15);
	}
	if (s1[i] != '\0')
		return (15);
	else if (s2[i] != '\0')
		return (-15);
	else
		return (0);
}
