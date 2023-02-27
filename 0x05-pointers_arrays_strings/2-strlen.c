#include "main.h"

/**
 * _strlen - this will check the length of a string
 * @s: this is the string to be checked
 *
 * Return: the int length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
