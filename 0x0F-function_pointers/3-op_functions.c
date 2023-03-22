#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - Calculate the sum of two integers.
 *
 * @a: The first number.
 * @b: The seconed number.
 *
 * Return: The sum of a and b.
 **/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Calculate the difference of two integers.
 *
 * @a: The first number.
 * @b: The seconed number.
 *
 * Return: The difference of a and b.
 **/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Calculate the product of two integers.
 *
 * @a: The first number.
 * @b: The seconed number.
 *
 * Return: The product of a and b.
 **/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Calculate the result of the division of two integers.
 *
 * @a: The first number.
 * @b: The seconed number.
 *
 * Return: The result of the division of a and b.
 **/
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Calculate the reminder of the division of two integers.
 *
 * @a: The first number.
 * @b: The seconed number.
 *
 * Return: The reminder of the division of a and b.
 **/
int op_mod(int a, int b)
{
	return (a % b);
}
