#include "main.h"

/**
 * leet - Encode string into 1337
 *
 * @s: The string
 *
 * Return: s
 */
char *leet(char *s)
{
	char a1[] = "aAeEoOtTlL";
	char a2[] = "4433007711";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a1[j])
				s[i] = a2[j];
		}
	}
	return (s);
}
