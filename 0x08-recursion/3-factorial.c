#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 *
 * @n: The number
 *
 * Return: The factorial, -1 if given number less than 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
