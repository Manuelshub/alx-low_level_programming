#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 0 if little endian.
 */
int get_endianness(void)
{
	union endian my_endian;

	my_endian.n = 1;
	if (my_endian.c[0] == my_endian.n)
		return (1);
	return (0);
}
