#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Display all possible combination of single-digit numbers
 *
 * Return: Always 0 (sucsses)
 */
int main(void)
{
	int digit_comb = 0;

	for (; digit_comb < 10; digit_comb++)
	{
		putchar('0' + digit_comb);
		if (digit_comb < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
