#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - Prints all strings arguments.
 *
 * @separator: String to be printed between the strings.
 * @n: Number of strings passed to the function.
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *p;
	va_list strings;

	p = malloc(n * sizeof(char *));
	if (p == NULL)
		return (p);

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(strings, char *);
		if (*p != '\0')
		{
			printf("%s", p);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(strings);
	putchar('\n');
}
