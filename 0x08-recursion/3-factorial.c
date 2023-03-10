#include "main.h"

/**
 * factorial - this returns the factorial of a given number
 * @n: this is the number to find the factorial of
 *
 * Return: if n > 0 - the factorial of int n
 *		if n < 0 - 1 to indicate an error
 */

int factorial(int n)
{
	int output = n;

	if (n < 0)
	{
		return (-1);
	}

	else if
		(n >= 0 && n <= 1)
	{
		return (1);
	}
	output *= factorial(n - 1);

	return (output);
}
