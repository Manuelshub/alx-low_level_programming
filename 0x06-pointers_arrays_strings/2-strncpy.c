#include "main.h"

/**
 * *_strncpy - this copies at most an inputted number of bytes
 * @dest: this is storing the string copy
 * @src: this is the source string
 * @n: this is the max number of bytes
 * 
 * Return: this is a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int apple = 0;
	int src_len = 0;

	while (src[apple++])
		src_len++;

	for (apple = 0; src[apple] && apple < n; apple++)
		dest[apple] = src[apple];

	for (apple = src_len; apple < n; apple++)
		dest[apple] = '\0';

	return (dest);
}
