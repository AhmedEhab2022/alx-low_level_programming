#include <stdio.h>
#include <stdlib.h>
#define UNUSED(x) (void)(x)

/**
 * main - Display The number of arguments expect name of the file
 *
 * @argc: The counter of The arguments
 * @argv: The array of passed arguments
 *
 * Return: Always 0 (sucsses)
 */
int main(int argc, char *argv[])
{
	UNUSED(argv);
	printf("%d\n", argc - 1);
	return (0);
}
