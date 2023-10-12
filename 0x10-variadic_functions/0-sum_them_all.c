#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: the number of arguments to be passed.
 * Return: the sum of all it's arguments.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list n_args;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(n_args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(n_args, unsigned int);
	}
	va_end(n_args);

	return (sum);
}
