#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the number.
 * @index: the index.
 * Return: the value of a bit at a given index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int shift_value;
	int bit_index;
	unsigned int bits = sizeof(unsigned long int) * 8;

	if (index > bits)
		return (-1);

	shift_value = n >> index;
	bit_index = shift_value & 1;

	return (bit_index);
}
