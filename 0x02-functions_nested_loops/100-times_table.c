#include "main.h"

/**
 * print_times_table - Function that prints the n times table.
 * @n: the number
 */

void print_times_table(int n)
{
	int i, j, mul;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				mul = i * j;
				if (j == 0)
					_putchar(mul + '0');
				else if (mul < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(mul + '0');
				}
				else if (mul >= 10 && mul < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(mul / 10 + '0');
					_putchar((mul % 10) + '0');
				}
				else if (mul >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(mul / 100 + '0');
					_putchar((mul / 10) % 10 + '0');
					_putchar((mul % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
