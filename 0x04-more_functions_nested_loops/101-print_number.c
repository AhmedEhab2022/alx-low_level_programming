#include "main.h"

/**
 * print_number - Display an integer.
 *
 * @n: An integer
 */
void print_number(int n)
{
	int temp;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n > 9 && n < 100)
	{
		_putchar('0' + (n / 10));
		_putchar('0' + (n % 10));
	}
	else if (n > 99 && n < 1000)
	{
		temp = n / 10;
		_putchar('0' + (n / 100));
		_putchar('0' + (temp % 10));
		_putchar('0' + (n % 10));
	}
	else if (n > 999 && n < 10000)
	{
		temp = n / 100;
		_putchar('0' + (n / 1000));
		_putchar('0' + (temp % 10));
		temp = n / 10;
		_putchar('0' + (temp % 10));
		_putchar('0' + (n % 10));
	}
	else
		_putchar('0' + n);
}
