#include "main.h"

/**
 * _isdigit - Check if the input is digit from 0 to 9 or not
 *
 * @c: the letter or number that the user will input it
 *
 * Return: 1 if the input is digit from 0 to 9 otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
