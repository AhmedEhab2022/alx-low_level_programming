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
	unsigned int i, j, check;
	const char arg_t[] = "cifs";
	char *s;
	va_list arg;

	i = check = 0;
	va_start(arg, format);
	while (format[i] && format)
	{
		j = 0;
		while (arg_t[j])
		{
			if (format[i] == arg_t[j] && check)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arg, int)), check = 1;
				break;
			case 'i':
				printf("%d", va_arg(arg, int)), check = 1;
				break;
			case 'f':
				printf("%f", va_arg(arg, double)), check = 1;
				break;
			case 's':
				s = va_arg(arg, char *), check = 1;
				if (*s == '\0')
				{
					printf("(nil)");
					break;
				} printf("%s", s);
				break;
		} i++;
	}
	printf("\n"), va_end(arg);
}
