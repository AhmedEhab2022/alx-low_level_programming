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
	unsigned int i, j, length;

	length = 0;
	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				length++;
		}
	}
	for (j = 0; accept[j] != '\0'; j++)
	{
		if (s[0] == accept[j])
			return (length);
	}
	return (0);
}
