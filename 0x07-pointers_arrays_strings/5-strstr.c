#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: pointer to the string to be searched.
 * @needle: pointer to the string to be searched for.
 * Return: pointer to the beginning of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
	{
		return (haystack);
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
		{
			return ((haystack + i));
		}
	}
	return (NULL);
}
