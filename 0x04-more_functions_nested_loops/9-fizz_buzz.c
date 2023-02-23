#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Display numbers from 1 to 100.
 * But for multiples of three print' Fizz'
 * And for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz.
 *
 * Return: Always 0 (sucsess)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 5 == 0 && i % 3 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%d", i);
		if (i < 10)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
