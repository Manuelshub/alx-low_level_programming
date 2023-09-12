#include "main.h"

/**
 * _isalpha - Function that checks for alphabetic characters.
 * @c: parameter to be checked
 *
 * Return: 1 if true, 0 if otherwise
 */

int _isalpha(int c)
{
	/* Ascii values of 'A' and 'Z' */
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
