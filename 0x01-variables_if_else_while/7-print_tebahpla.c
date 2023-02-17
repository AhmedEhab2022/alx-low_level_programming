#include <stdio.h>

/**
 * main - Entry point
 *
 * Descripsion: Display lowercase alphabets in reverse
 *
 * Return: 0 (sucsess)
 */
int main(void)
{
	char c = 'z';

	for (; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
