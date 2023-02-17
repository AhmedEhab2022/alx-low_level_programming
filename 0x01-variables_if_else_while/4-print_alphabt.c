#include <stdio.h>

/**
 * main - Entry point
 *
 * Descripsion: print alphabets expect q and e
 *
 * Return: Always 0 (sucsses)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
