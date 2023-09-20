#include "main.h"

/**
 * _strlen - counts the length of a string.
 * @s: the pointer to the string.
 *
 * Return: the length of the string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}

/**
 * _strncat - concatenates two strings by using atmost n bytes.
 * @n: the number of bytes from the src string.
 * @dest: the destination string.
 * @src: the source string.
 *
 * Return: a pointer to the concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = _strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + n] = '\0';

	return (dest);
}
