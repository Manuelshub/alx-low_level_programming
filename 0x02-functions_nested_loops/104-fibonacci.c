#include <stdio.h>

/**
 * main - Entry point.
 * Return: 0.
 */
int main(void)
{
	unsigned long num1, num2, i, term, a, b, c;

	num1 = 1, num2 = 2;
	printf("%lu, %lu", num1, num2);
	for (i = 0; i < 96; i++)
	{
		term = num1 + num2;
		if (term < num2)
			break;
		num1 = num2;
		num2 = term;
		printf(", %lu", term);
	}
	a = num1 % 100;
	num1 /= 100;
	b = num2 % 100;
	num2 /= 100;
	for (; i < 96; i++)
	{
		c = a + b;
		if (c > 100)
		{
			c %= 100;
			term = num1 + num2 + 1;
		}
		else
			term = num1 + num2;
		num1 = num2;
		num2 = term;
		a = b;
		b = c;
		printf(", %lu%02lu", term, c);
	}

	printf("\n");
	return (0);
}
