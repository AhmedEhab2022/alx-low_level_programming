#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: display alphabet
 *
 * Return: Always 0 (sucsses)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
