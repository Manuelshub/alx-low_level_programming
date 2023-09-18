#include "main.h"

/**
 * reset_to_98 - updates the value it points to to 98.
 * @n: the pointer to an int type
 *
 * Return: void or nothing.
 */
void reset_to_98(int *n)
{
	/* Dereferencing the pointer n to change the value stored*/
	*n = 98;
}
