#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 when successful
 */
int main(void)
{
	/* Ascii value of char 0 */
	int c = 48;

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
