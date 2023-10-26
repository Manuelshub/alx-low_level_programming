#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: the number to be represented.
 */
void print_binary(unsigned long int n)
{
	unsigned long int shifts = 0, n_copy;
	unsigned long int mask, i = 1;

	n_copy = n;
	if (n == 0)
		_putchar('0');
	while (n_copy != 0)
	{
		n_copy >>= 1;
		shifts++;
	}
	mask = i << (shifts - 1);
	while (mask != 0 && n != 0)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
		mask = mask >> 1;
	}
}
