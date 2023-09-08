#include <stdio.h>

/**
 * main - This is the Entry point
 *
 * Return: 0
 */
int main(void)
{
	char c = '0';
	char d = 'a';

	while (c <= 57)
	{
		putchar(c);
		c++;
	}
	while (d <= 102)
	{
		putchar(d);
		d++;
	}
	putchar('\n');

	return (0);
}
