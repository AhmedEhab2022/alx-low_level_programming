#include "main.h"

/**
 * string_toupper - Change all lowercase letters of a string to uppercase
 *
 * @s: The string
 *
 * Return: the string after capitalize all lowercase letters
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}
