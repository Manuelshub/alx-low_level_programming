#include <stdio.h>

/**
 * main - Entry point.
 * Return: 0.
 */
int main(void)
{
	long int num = 612852475143;
	long int div = 2, result;

	while (num > 1)
	{
		if (num % div == 0)
		{
			result = num / div;
			num = result;
		}
		else
			div++;
	}
	printf("%ld\n", div);

	return (0);
}
