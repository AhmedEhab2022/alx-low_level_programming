#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive numbers
 *
 * @argc: The counter of The arguments
 * @argv: The array of passed arguments
 *
 * Return: Always 0 (sucsses), 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i, add_pos;

	add_pos = 0;
	for (i = 1; i < argc; i++)
	{
		if (!(atoi(argv[i])))
		{
			printf("Error\n");
			return (1);
		}
		else if (atoi(argv[i]) > 0)
			add_pos += atoi(argv[i]);
	}
	printf("%d\n", add_pos);
	return (0);
}
