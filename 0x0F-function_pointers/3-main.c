#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 *
 * @argc: counter of arguments.
 * @argv: Array of arguments.
 *
 * Return: The result of the operation
 * if the number of arguments is wrong, print Error,
 * and exit with the status 98
 * if the operator is none of the above, print Error,
 * and exit with the status 99
 * if the user tries to divide (/ or %) by 0, print Error,
 * and exit with the status 100
 **/
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*ptr)(int, int);

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	ptr = get_op_func(argv[2]);
	printf("%d\n", ptr(num1, num2));
	return (0);
}
