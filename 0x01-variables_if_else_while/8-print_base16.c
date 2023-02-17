#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all numbers of base 16 in lowercase
 *
 * Return: Always 0 (sucsses)
 */
int main(void)
{
	int hex_num1;
	char hex_num2;

	for (hex_num1 = 0; hex_num1 <= 9; hex_num1++)
		putchar('0' + hex_num1);
	for (hex_num2 = 'a'; hex_num2 <= 'f'; hex_num2++)
		putchar(hex_num2);
	putchar('\n');
	return (0);
}
