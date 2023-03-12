#include "main.h"

/**
 * *_memcpy - this copies memory area
 * @dest: tjhis is the memory area
 * @src: this is the source
 * @n: this is the length of the src
 *
 * Return: pointer to dest
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
