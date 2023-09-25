#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: pointer to the string to be searched.
 * @needle: pointer to the string to be searched for.
 * Return: pointer to the beginning of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	char *cont;

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		if (*haystack != needle[i])
		{
			haystack++;
		}
		if (*haystack == needle[i])
		{
			cont = haystack;
			for (i = 0; needle[i] != '\0'; i++)
			{
				if (*haystack == needle[i])
				{
					continue;
				}
				haystack++;
			}
			return (cont);
		}
	}
	return (NULL);
}
