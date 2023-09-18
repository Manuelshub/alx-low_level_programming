#include "main.h"

/**
 * _puts - Prints a string followed by a new line.
 * @str: the string to be printed.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
