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
	int count, i, len;

	/*counting the length of the strng with my user made function*/
	count = _strlen(s);

	/* checking if the length is divisible by 2*/
	if (count % 2 != 0)
	{
		len = (count - 1) / 2;
	}
	else
	{
		len = count / 2;
	}
	/*printing from half of the string*/
	for (i = len; s[i]; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
