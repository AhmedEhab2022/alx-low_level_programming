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
	unsigned int i;

	for (i = 1; s[i] != '\0'; i++)
	{
		if (s[i] == accept[0])
			return (i + 1);
	}
	return (0);
}
