#include "main.h"

/**
 * _strchr - locates the a character in a string.
 * @s: pointer to the string.
 * @c: the character to be checked for.
 * Return: pointer to the manipulated string.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	return (NULL);
}
