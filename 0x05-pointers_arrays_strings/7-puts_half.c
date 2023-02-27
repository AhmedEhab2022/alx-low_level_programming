#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - Display half of a string
 *
 * @str: the string
 */
void puts_half(char *str)
{
	int j = _strlen(str);
	int i = j / 2;

	while (i <= j - 1)
	{
		if (j % 2 != 0 && i == (j - 2) / 2)
			_putchar(str[i]);
		else
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
