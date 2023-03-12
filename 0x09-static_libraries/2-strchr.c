#include "main.h"

/**
 * _strchr - This locates a character in a string
 * @s: This is the string to be searched
 * @c: This is the character to be located
 *
 * Return: if c is found - that is a ppointer to the first occurence
 * if c is not found - NULL
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
