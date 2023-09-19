#include "main.h"

/**
 * puts_half - prints half of a string.
 * @s: the pointer to the string.
 * Description: can only use _putchar to print.
 *
 * Return: nothing
 */
void puts_half(char *s)
{
	int len, i, n;

	len = 0;
	for (i = 0; s[i]; i++)
	{
		len += 1;/* incrementing len to get the length of string*/
	}
	/* checking if the length is divisible by 2*/
	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
		for (i = n + 1; s[i]; i++)
		{
			_putchar(s[i]);
		}
	}
	else
	{
		n = len / 2;
		/*printing from half of the string*/
		for (i = n; s[i]; i++)
		{
			_putchar(s[i]);
		}
	}
	_putchar('\n');
}
