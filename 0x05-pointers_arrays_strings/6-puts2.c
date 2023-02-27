#include "main.h"

/**
 * puts2 - Display every other character of a string,
 * starting with the first character
 *
 * @str: The string
 */
void puts2(char *str)
{
	int i;

	for (i = 0; (*(str + i) != '\0'); i++)
	{
		if (i % 2 == 0)
		{
			if (i > 0)
			{
				if ((*(str + i - 1) != '\0'))
				{
					_putchar(*(str + i));
				}
			}
			else
				_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
