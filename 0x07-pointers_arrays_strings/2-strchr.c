#include "main.h"

/**
 * _strchr - Locates a character in a string
 *
 * @s: The string
 * @c: The character
 *
 * Return: Substring that the first occurrence of the character c in s
 */
char *_strchr(char *s, char c)
{
	int count = 0;

	while (s[count] != '\0')
	{
		if (s[count] == c)
			return (s + count);
		count++;
	}
	return (s + count);
}
