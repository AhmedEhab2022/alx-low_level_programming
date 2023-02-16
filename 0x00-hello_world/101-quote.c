#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: Display the message below
 *
 * Return: Always 1 (sucsses)
 */
int main(void)
{
	write(2, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}
