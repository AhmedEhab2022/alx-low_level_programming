#include "main.h"

/**
 * _isupper - Check if the letter in uppercase or not
 *
 * @c: The letter
 *
 * Return: 1 if in uppercase, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
