#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - Display a string in reverse order
 *
 * @s: The string
 */
void print_rev(char *s)
{
	int i = _strlen(s) - 1;

	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
