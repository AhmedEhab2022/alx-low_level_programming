#include "main.h"

/**
 * check - Checks if the given number is prime or not by division
 *
 * @num: The number that use to check
 * @n: The given number
 *
 * Return: 1 if the input integer is a prime number, otherwise 0
 */
int check(int num, int n)
{
	if (num == 1)
		return (1);
	if (n % num == 0)
		return (0);
	return (check(num - 1, n));
}


/**
 * is_prime_number - Checks if the given number is prime or not
 *
 * @n: The given number
 *
 * Return: 1 if the input integer is a prime number, otherwise 0
 */
	int is_prime_number(int n)
{
	int num = n - 1;
	int prime;

	if (n < 0 || n == 1)
		return (0);
	if (n == 2 || n == 3)
		return (n);
	prime = check(num, n);
	return (prime);
}
