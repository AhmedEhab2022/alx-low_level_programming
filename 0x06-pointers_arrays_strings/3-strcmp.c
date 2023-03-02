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
	int i, res;

	res = 0;
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] > s2[i] || s1[i] < s2[i])
		{
			res = (s1[i] - '0') - (s2[i] - '0');
			break;
		}
	}
	if (res == 0)
		res = 0;
	return (res);
}
