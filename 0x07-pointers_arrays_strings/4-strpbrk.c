#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the main string.
 * @accept: the second string.
 * Return: the pointer to the manipulated string.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == *s)
			{
				return (s);
			}
		}
		s += 1;
	}
	return (NULL);
}
