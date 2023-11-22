#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: integer to be printed.
 * Description: You can only use _putchar to print.
 */
void print_number(int n)
{
	int div, is_negative = 0;

	if (n < 0)
	{
		if (n == INT_MIN)
		{
			is_negative = 1;
			n /= 10;
		}
		n = -n;
		_putchar('-');
	}
	if (n == 0)
	{
		_putchar('0');
		return;
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
	if (is_negative)
		_putchar('8');
}
