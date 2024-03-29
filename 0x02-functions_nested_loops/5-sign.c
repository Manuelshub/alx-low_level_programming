#include "main.h"

/**
 * print_sign - function that prints the sign of a number,
 * @n: number to be checked.
 *
 * Return: 1 if n is greater than 0, 0 if it is 0 or -1 if it is less than
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
