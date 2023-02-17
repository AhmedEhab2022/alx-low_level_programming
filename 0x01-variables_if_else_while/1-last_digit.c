#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Descripsion: print the last digit of n and check if it is grater than 5, if it is equal 0 and less than 6 or not
 *
 * Return: Always 0 (sucsess)    
 */ 
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
        if (last_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	else if (last_digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	else if (last_digit < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
	return (0);
}
