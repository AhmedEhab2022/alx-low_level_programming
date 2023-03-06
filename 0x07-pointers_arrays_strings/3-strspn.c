#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 *
 * @s: The string
 * @accept: Substring
 *
 * Return: The number of bytes of prefix accept in s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (i + 1);
		}
	}
	return (0);
}
