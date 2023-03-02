#include "main.h"

/**
 * cap_string - Capitalize all words of a string
 *
 * @s: The string
 *
 * Return: str
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i > 0)
		{
			switch (s[i - 1])
			{
				case ',':
				case ';':
				case '.':
				case '!':
				case '?':
				case '"':
				case '(':
				case ')':
				case '{':
				case '}':
				case ' ':
				case '\n':
				case '\t':
					if (s[i] >= 'a' && s[i] <= 'z')
						s[i] -= 32;
			}
		}
	}
	return (s);
}
