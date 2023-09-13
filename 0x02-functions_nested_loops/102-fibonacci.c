#include "main.h"

/**
 * main - A program that prints the first fibonacci numbers, starting starting
 *	with 1 and 2.
 * Return: 0
 */

int main(void)
{
	unsigned long int i, a, b, term;

	a = 1;
	b = 2;
	printf("%lu, %lu", a, b);

	for (i = 0; i < 48; i++)
	{
		term = a + b;
		a = b;
		b = term;
		printf(", %lu", term);
	}
	printf("\n");

	return (0);
}
