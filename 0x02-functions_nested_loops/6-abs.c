#include "main.h"

/**
 * _abs - Display the absolute value of an integer
 *
 * @n: the number that the function calculate the absolute value for
 *
 * Return: the absolute value of n
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return ((n * -1));
}
