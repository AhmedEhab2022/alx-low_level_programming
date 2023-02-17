#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all base 10 numbers with putchar function
 *
 * Return: Always 0 (sucsses)
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar('0' + n);
		n++;
	}
	putchar('\n');
	return (0);
}
