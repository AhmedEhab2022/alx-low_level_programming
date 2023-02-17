#include <stdio.h>

/**
 * main - Entry point
 *
 * Descripsion: display alphabet in lowercase and uppercase
 *
 * Return: Always 0 (sucsses)
 */
int main(void)
{
	char c_l = 'a';
	char c_u = 'A';

	while (c_l <= 'z')
	{
		putchar(c_l);
		c_l++;
	}
	while (c_u <= 'Z')
	{
		putchar(c_u);
		c_u++;
	}
	putchar('\n');
	return (0);
}
