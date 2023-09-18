#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line.
 * @s: the pointer to the strng.
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len])
	{
		len++;
	}
	len--;
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
