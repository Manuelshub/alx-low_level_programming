#include "main.h"

/**
 * _islower - Function that checks for lowercase characters.
 * @c: Parameter to be checked.
 *
 * Return: 1 if lowercase
 *	0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
