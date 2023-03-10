#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: The counter of The arguments
 * @argv: The array of passed arguments
 *
 * Return: Always 0 (sucsses), 1 otherwise
 */
int main(int argc, char *argv[])
{
	int multip;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	multip = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", multip);
	return (0);
}
