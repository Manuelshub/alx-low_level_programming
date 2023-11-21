#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: integer to be printed.
 * Description: You can only use _putchar to print.
 */
void print_number(int n)
{
	int div;

	if (n < 0)
	{
		n = -1 * n;
		_putchar('-');
	}
	div = 1;
	while (n / div >= 10)
		div *= 10;
	while (div >= 1)
	{
		_putchar(n / div + '0');
		n %= div;
		div /= 10;
	}
}
