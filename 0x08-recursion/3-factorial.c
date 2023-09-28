#include "main.h"

/**
 * factorial - returns the factoriall of a given number.
 * @n: the given number.
 * Return: factorial of a number.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
