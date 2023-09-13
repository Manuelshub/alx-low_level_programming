#include "main.h"

/**
 * main - Program that prints the sum of the even valued terms.
 * Return: 0.
 */

int main(void)
{
	unsigned int i, a, b, term;
	unsigned int sum = 0;

	a = 1, b = 2;
	for (i = 0; i < 32; i++)
	{
		term = a + b;
		a = b;
		b = term;
		if (a % 2 == 0)
		{
			sum = sum + a;
		}
	}
	printf("%d\n", sum);

	return (0);
}
