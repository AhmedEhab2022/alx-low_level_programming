#include "main.h"

/**
 * flip_bits - Returns the number of bits that need to flip
 * to get from first number to second number.
 *
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits that need to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned int count = 0;

	result = n ^ m;

	while (result > 0)
	{
		count+= (result & 1);
		result >>= 1;
	}
	return (count);
}
