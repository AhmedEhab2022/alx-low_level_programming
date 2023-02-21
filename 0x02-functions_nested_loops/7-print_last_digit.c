#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - Display the last digit of integer number
 *
 * @n: The given integer number
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	_putchar('0' + (_abs(n % 10)));
	return (_abs(n % 10));
}
