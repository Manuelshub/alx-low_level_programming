#include "main.h"

/**
 * flip_bits - returns the number of bits needed to be flipped to get
 *		from one number to another.
 * @n: the first number.
 * @m: the second number.
 * Return: the nmber of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned int count = 0;

	if (n == m)
		return (0);
	result = n ^ m;
	while (result)
	{
		if (result & 1)
			count += 1;
		result >>= 1;
	}

	return (count);
}
