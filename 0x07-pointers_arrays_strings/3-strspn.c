#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: the main string.
 * @accept: the second string.
 * Return: length of prefixed string.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;

	count = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*(accept + j) == *(s + i))
			{
				count++;
				break;
			}
		}
		if (accept[j] != s[i])
		{
			break;
		}
	}
	return (count);
}
