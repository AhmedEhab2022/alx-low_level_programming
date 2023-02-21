#include "main.h"

/**
 * print_sign - print the sign of given number
 *
 * @n: is a given number
 *
 * Return: 1 if the number is positive, -1 if negative, 0 if equal zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
