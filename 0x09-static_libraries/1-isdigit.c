#include "main.h"

/**
 * _isdigit - This checks if a character is a digit
 * @c: this is the carrier variable
 * Return: 1 if true, 0 if false
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
