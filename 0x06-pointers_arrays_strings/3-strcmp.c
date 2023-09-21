#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: the pointer to the first string.
 * @s2: pointer to the second string.
 * Return: the diffrence between both strings
 */
int _strcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
