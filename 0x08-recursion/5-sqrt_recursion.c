#include "main.h"

/**
 * _sqrt_recursion - returns the square root of a number by calling
 *		calling another function.
 * @n: the number.
 * Return: the square root of a number.
 */
int _sqrt_recursion(int n)
{
	int _sqrt_func(int n, int s);
	int s = 1;

	return (_sqrt_func(n, s));
}

/**
 * _sqrt_func - returns the square root of a number.
 * @s: square of a number.
 * @n: the number.
 * Return: the square root of a number.
 */
int _sqrt_func(int n, int s)
{
	if ((s * s) == n)
	{
		return (s);
	}
	else if (s < n)
	{
		return (_sqrt_func(n, ++s));
	}
	else
	{
		return (-1);
	}
}
