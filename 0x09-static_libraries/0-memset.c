#include "main.h"

/**
 * _memset - This fills the first n bytes of the memory area
 * @s: This is a pointer to the memory area to be filled
 * @b: This is the character to fill the memory area with
 * @n: this is the number of byts to be filled
 *
 * Return: A pointer to the filled memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[1] = b;

	return (s);
}
