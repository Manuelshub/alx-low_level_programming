#include "3-calc.h"

/**
 * op_add - adds two numbers.
 * @a: first number.
 * @b: second number.
 * Return: the sum of both numbers.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two numbers.
 * @a: first numbers.
 * @b: second numbers.
 * Return: the difference between of both numbers.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers.
 * @a: first number.
 * @b: second number.
 * Return: the product of both numbers.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers.
 * @a: first number.
 * @b: second number.
 * Return: the division of both numbers.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - performs modulus of both numbers.
 * @a: the first number.
 * @b: second number
 * Return: the remainder of both numbers.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
