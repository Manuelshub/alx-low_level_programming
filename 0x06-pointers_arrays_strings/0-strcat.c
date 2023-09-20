#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: the pointer to the string.
 * Return: length of the string.
 */
int _strlen(char *s)
{
	int cont = 0;

	while (s[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}
/**
 * _strcat - Concatenates two strings.
 * @src: the source string.
 * @dest: the destination string.
 * Return: pointer to the appended string.
 */
char *_strcat(char *dest, char *src)
{
	int i, len;

	len = _strlen(dest);
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + _strlen(src)] = '\0';
	return (dest);
}
