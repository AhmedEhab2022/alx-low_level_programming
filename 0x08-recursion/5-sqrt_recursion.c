#include "main.h"

/**
 * check - checks if the i * i is equal n
 *
 * @i: The number that use to check
 * @n: The number
 *
 * Return: the value  of i * i
 */
int check(int i, int n)
{
	int p = 0;

	p = i * i;
	if (p == n)
		return (i);
	if (p > n)
		return (-1);
	return (check(i + 1, n));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 *
 * @n: The number
 *
 * Return: The natural square root, -1 if n does not have a natural square root
 */
	int _sqrt_recursion(int n)
{
	int i = 1;
	int sqrt;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	sqrt = check(i, n);
	return (sqrt);
}
