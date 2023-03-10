#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: The counter of The arguments
 * @argv: The array of passed arguments
 *
 * Return: Always 0 (sucsses)
 */
int main(int argc ,char *argv[])
{
	if(argc >= 1)
		printf("%s\n", argv[0]);
	return (0);
}
