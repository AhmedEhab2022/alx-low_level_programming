#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_for_nums - check for numbers in string
 *
 * @s: The string
 *
 * Return: 0 if The string is a numbers, 1 otherwise
 */
int check_for_nums(char *s)
{
	int len, j;

	len = strlen(s);
	for (j = 0; j < len; j++)
	{
		if (!(s[j] >= '0' && s[j] <= '9'))
			return (1);
	}
	return (0);
}

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
		if (check_for_nums(argv[i]))
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
