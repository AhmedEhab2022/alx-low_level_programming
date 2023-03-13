#include "main.h"
#include <string.h>

/**
 * checker - help is_palindrome
 *
 * @s: The string
 * @start: The left index
 * @end: The right index
 *
 * Return: True if s is palindrome, otherwise False
 */
int checker(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] == s[end])
		return (checker(s, start + 1, end - 1));
	else
		return (0);
}

/**
 * is_palindrome - Check if string is palindrome or not
 *
 * @s: The string
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int i, j;
	int is_palin;

	i = 0;
	j = strlen(s) - 1;
	if (*s == '\0')
		return (1);
	is_palin = checker(s, i, j);
	return (is_palin);
}
