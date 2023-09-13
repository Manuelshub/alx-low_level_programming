#include "main.h"

/**
 * times_table - Function that prints the 9 times table.
 */

void times_table(void)
{
	int i, j;
	int mul = 1;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
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
