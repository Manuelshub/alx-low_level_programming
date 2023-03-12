#include "main.h"

/**
 * _abs - this checks for absolute value
 *
 * @e: the parameter to be checked
 *
 * Return: this is successful when e
 */

int _abs(int e)
{
	if (e < 0)
		e = -(-e);
	else if (e >= 0)
		e = e;
	return (e);
}

