#include <stdio.h>

/**
 * main - The main function
 *
 * Return: Always 0
 */
int main(void)
{
	char c = 'a';
	char d = 'A';

	while (c <= 'z' && d <= 'Z')
	{
		putchar(c);
		c++;
	}
	while (c >= 'z' && d <= 'Z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');

	return (0);
}
