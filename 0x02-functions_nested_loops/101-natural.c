#include <stdio.h>

/**
 * main - Entry point
 *
 * Discreption: print the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: Always 0 (sucsess)
 */
int main(void)
{
	int num1, num2, multipl3, sum3, sum5, multipl5;

	sum3 = 0;
	num2 = 1;
	num1 = 1;
	multipl3 = 0;
	sum5 = 0;
	multipl5 = 0;
	while (multipl3 < 341)
	{
		multipl3 = 3 * num1;
		sum3 += multipl3;
		num1++;
	}
	while (multipl5 < 204)
	{
		multipl5 = 5 * num2;
		sum5 += multipl5;
		num2++;
	}
	printf("%d\n", (sum3 + sum5));
	return (0);
}
