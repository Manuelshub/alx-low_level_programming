#include "main.h"

/**
 * is_prime_number - returns 1 if n is a prime number.
 * @n: the parameter.
 * Return: 1 if n is a prime number, otherwise 0.
 */
int is_prime_number(int n)
{
	int prime_number(int n, int i);

	if (n < 2)
	{
		return (0);
	}

	return (prime_number(n, 2));
}

/**
 * prime_number - checks for prime number.
 * @n: first parameter.
 * @i: second parameter.
 * Return: 1 if it is a prime number, otherwise 0.
 */
int prime_number(int n, int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (prime_number(n, i + 1));
}
