#include "main.h"

/**
 * _isalpha - check if the input is letter or not
 *
 * @c: the input that we need to checke
 *
 * Return: 1 if the input is letter, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
