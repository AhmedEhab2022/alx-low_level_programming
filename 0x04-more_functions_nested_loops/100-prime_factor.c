#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Display the largest prime factor of the number 612852475143
 *
 * Return: Alwayse 0 (sucsess)
 */
int main(void)
{
	long d, n, max;

	n = 612852475143;
	d = 2;
	max = 2;
	while (n > 1)
	{
		if (n % d == 0)
		{
			if (d > max)
				max = d;
			n /= d;
		}
		d++;
	}
	printf("The largest prime factor: %lu\n", max);
	return (0);
}
