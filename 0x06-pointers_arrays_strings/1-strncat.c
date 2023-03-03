#include "main.h"

/**
 * *_strncat - this concatenates two strings using at most an inputted number
 * @dest: this is the string to be appended upon
 * @src: this is the string to be appended to dest
 * @n: this is the number of bytes from src to be appended to dest
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int apple = 0;
	int dest_len = 0;

	while (dest[apple++])
		dest_len++;
	for (apple = 0; src[apple] && apple < n; apple++)
		dest[dest_len++] = src[apple];
	return (dest);
}
