#include "main.h"

/**
 * _puts - this prints a string
 * @str: this is the pointer to the string to print
 *
 * Return: Always 0
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
