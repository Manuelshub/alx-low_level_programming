#include "main.h"

/**
 * set_bit - sets the valie of a bit to 1 at a given index.
 * @n: the number.
 * @index: the index.
 * Return: 1 if successful, otherwise -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int set;
	unsigned int bits = sizeof(unsigned long int) * 8;

	if (index > bits)
		return (-1);
	set = 1 << index;
	*n = *n | set;

	return (1);
}
