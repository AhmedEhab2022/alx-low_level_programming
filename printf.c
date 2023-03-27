#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * my_abs - calculate the absolute value of integer.
 *
 * @n: the integer number.
 *
 * Return: The absolute value of integer.
 */
int my_abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

/**
 * my_reverse - reverses string.
 *
 * @s: string.
 */
void my_reverse(char *s)
{
	int i, len;
	char *str;

	str = malloc(sizeof(s));
	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	i--;
	len = i;
	for (i; i >= 0; i--)
		s[my_abs(len - i)] = str[i];
}

/**
 * my_itoa - convrt integer to string.
 *
 * @n: the integer number
 * @s: empty array of char
 *
 * Return: a string of digits of number.
 */
char *my_itoa(int n, char s[])
{
	int i, sign;

	if ((sign == n) < 0)
		n = -n;
	i = 0;
	do {
		s[i++] = n % 10 + '0';
	} while ((n /= 10) > 0);
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	my_reverse(s);
	return (s);
}

/**
 * my_putchar - print any character
 *
 * @c: The character.
 *
 * Return: the ASCII value of char.
 */
int my_putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * my_printf - print anything.
 *
 * @str: The string.
 */
void my_printf(const char *str, ...)
{
	int i, len = 0, num;
	char *p, *numtostr;
	va_list args;

	va_start(args, str);
	while (str[len] != '\0')
	{
		switch (str[len])
		{
		case '%':
			i = 0;
			switch (str[len + 1])
			{
			case 'd':
				num = va_arg(args, int);
				p = malloc(sizeof(num));
				numtostr = my_itoa(num, p);
				while (numtostr[i] != '\0')
				{
					my_putchar(numtostr[i]), i++;
				} len += 2;
				break;
			case 'c':
				my_putchar(va_arg(args, int)), len += 2;
				break;
			case 's':
				p = va_arg(args, char *);
				while (p[i] != '\0')
				{
					my_putchar(p[i]), i++;
				} len += 2;
				break;
			case '%':
				my_putchar('%'), len += 2, break;
			}
		default:
			my_putchar(str[len]);
			break;
		} len++;
	} va_end(args);
}
