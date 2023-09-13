#include "main.h"

/**
 * print_to_98 - Function that prints all natural numbers from n to 98.
 * @n: the number to start printing from.
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n++;
		}
		putchar('\n');
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n--;
		}
		putchar('\n');
	}
	else
		printf("%d\n", n);
}
