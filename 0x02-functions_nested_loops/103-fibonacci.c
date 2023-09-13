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
	for (i = 0; i < 30; i++)
	{
		if (b % 2 == 0)
		{
			sum = sum + b;
		}
		term = a + b;
		a = b;
		b = term;
	}
	printf("%d\n", sum);

	return (0);
}
