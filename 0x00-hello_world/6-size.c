#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Display the size of various data types
 *
 * Return: Always sucsess
 */
int main(void)
{
	printf("Size of a char: %d bytes", sizeof(char));
	printf("Size of an int: %d bytes", sizeof(int));
	printf("Size of a long int: %d bytes", sizeof(long int));
	printf("Size of a long long int: %d bytes", sizeof(long long int));
	printf("Size of a float: %d bytes", sizeof(float));
	return (0);
}
