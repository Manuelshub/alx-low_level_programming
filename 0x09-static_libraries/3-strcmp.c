#include "main.h"

/**
 * _strcmp - this compares pointers of two strings
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 * Return: If str1 < str2, the negative difference of
 * the first unmatched characters
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
