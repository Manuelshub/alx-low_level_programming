#include "main.h"

/**
 * _strncpy - copies a string.
 * @n: number of bytes.
 * @dest: destination string.
 * @src: source string.
 * Return: a pointer the newly copied string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	if (src[i] == '\0' && i != n)
	{
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
