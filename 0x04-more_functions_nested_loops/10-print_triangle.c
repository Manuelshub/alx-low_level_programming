#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @size:  Size of the triangle.
 *
 * Desc: Can only use _putchar to print.
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = size; i > 0; i--)
	{
		for (j = 1; j <= size; j++)
		{
			if (j < i)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
