#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints all numbers arguments.
 *
 * @separator: String to be printed between numbers.
 * @n: Number of integers passed to the function.
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1 && separator != NULL)
			printf("%d", va_arg(nums, int));
		else
		{
			printf("%d", va_arg(nums, int));
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(nums);
}
