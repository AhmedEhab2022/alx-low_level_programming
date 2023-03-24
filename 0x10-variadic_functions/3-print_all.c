#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything passed as argument.
 *
 * @format: list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	int i;
	char *s, *sep = "";
	va_list arg;

	i = 0;
	va_start(arg, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", sep, va_arg(arg, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(arg, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(arg, double));
				break;
			case 's':
				s = va_arg(arg, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", sep, s);
				break;
			default:
				i++;
				continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n"), va_end(arg);
}
