#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the '\0'
 *	to the buffer pointed to by dest.
 * @dest: pointer to the destination buffer.
 * @src: pointer to the source string.
 *
 * Return: pointer to the newly copied string.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
