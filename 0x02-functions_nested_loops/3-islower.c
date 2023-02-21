#include "main.h"

/**
 * _islower - check if the letter is lowercase or not
 *
 *@c: is a parameter letter that we need to check
 *
 * Return: always 1 (the letter is lowercase)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
	_putchar('\n');
}
