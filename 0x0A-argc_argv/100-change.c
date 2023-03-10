#include <stdio.h>
#include <stdlib.h>

/**
 * main - Display minimum number of coins to make change for an amount of money
 *
 * @argc: The counter of The arguments
 * @argv: The array of passed arguments
 *
 * Return: Always 0 (sucsses)
 */
int main(int argc, char *argv[])
{
	int min_coins, money;

	if (argc - 1 > 1 || argc - 1 == 0)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	while (money > 0)
	{
		if (money >= 25)

			money -= 25;

		else if (money >= 10)

			money -= 10;

		else if (money >= 5)

			money -= 5;

		else if (money >= 2)

			money -= 2;
		else
			money -= 1;
		min_coins++;
	}

	printf("%d\n", min_coins);
	return (0);
}
