#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - Calculates the number of chars printed.
 *
 * @format: Constant string.
 *
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
	int i, counter, j;
	char *p;
	va_list args;

	va_start(args, format);
	i = counter = 0;
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case '%':
			j = 0;
			switch (format[i + 1])
			{
			case 'c':
				counter++;
				i += 2;
				break;
			case 's':
				p = va_arg(args, char *);
				while (p[j] != '\0')
				{
					counter++;
					j++;
				}
				i += 2;
				break;
			case '%':
				counter++;
				break;
			}
		default:
			counter++;
			break;
		}
		i++;
	}
	va_end(args);
	return (counter);
}
