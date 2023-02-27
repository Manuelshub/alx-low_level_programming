#include "main.h"

/**
 * swap_int - this will swap the values of a and b
 * @a: this is pointer 1
 * @b: this is pointer 2
 * Return: this is successful when 0
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
