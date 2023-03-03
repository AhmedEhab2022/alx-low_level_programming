#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 *
 * @s: The string
 *
 * Return: s
 */
char *rot13(char *s)
{
	char a1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char a2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a1[j] != '\0'; j++)
		{
			if (s[i] == a1[j])
			{
				s[i] = a2[j];
				break;
			}
		}
	}
	return (s);
}
