#include "main.h"

/**
 * _isalpha - the function that checks for alphabets
 *
 * @c: the parameter to be checked
 *
 * Return: 1 if it is an alphabet
 * and 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
