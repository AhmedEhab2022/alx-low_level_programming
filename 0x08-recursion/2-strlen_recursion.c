#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 *
 * @s: The string
 *
 * Return: The string length
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len = _strlen_recursion(s + 1);
		return (len += 1);
	}
	return (0);
}
