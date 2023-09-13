#include "main.h"

/**
 * print_times_table - Function that prints the n times table.
 * @n: the number
 */

void print_times_table(int n)
{
	int i, j, mul;

	if (n > 15 || n < 0)
		_putchar('\n');
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			mul = i * j;
			if (mul == 0 && i == 0)
			{
				_putchar(mul + '0');
				if (j == 9)
					break;
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (mul == 0 && i >= 1)
				_putchar(mul + '0');
			else if (mul <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((mul % 10) + '0');
			}
			else if (mul > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
