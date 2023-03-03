#include "main.h"

/**
 * *_strcat - this concatenates 2 strings
 * @src: this is the source string
 * @dest: this is the destiation string to be concatenated upon
 * Return: this return pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;
	int i;

	for (i = 0 ; dest[i] != '\0' ; i++)
		destlen++;
	for (i = 0 ; src[i] != '\0' ; i++)
		srclen++;
	for (i = 0 ; i <= srclen ; i++)
		dest[destlen + i] = src[i];
	return (dest);
}
