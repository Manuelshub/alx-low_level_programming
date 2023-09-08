#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 when successful
 */
int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num += 1;
	}
	putchar('\n');

	return (0);
}
