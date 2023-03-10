#include "main.h"

/**
 * _pow_recursion - this returns the value of x raised to the value of y
 * @x: The number to be raised
 * @y: this is the power
 *
 * Return: The value of x raised to the power of y
 */


int _pow_recursion(int x, int y)
{
	int output = x;

	if (y < 0)
		return (-1);
	else if
		(y == 0)
			return (1);
	output *= _pow_recursion(x, y - 1);

	return (output);
}
