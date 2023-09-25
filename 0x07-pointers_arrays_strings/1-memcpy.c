#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: destination string.
 * @src: the source string.
 * @n: the number of bytes from memory area src.
 * Return: the pointer to the destination string.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
