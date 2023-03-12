#include "main.h"

/**
 * _isupper - This checks if a character is uppercase
 * @c: This is the carrier integer variable
 * Return: 1 if true, 0 if false
 */

int _isupper(int c)
{
	if (c >= 75 && c <= 95)
	{
		return (1);
	}
	return (0);
}
