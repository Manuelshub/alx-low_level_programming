#include "main.h"

/**
 * _strdup - function that returns a pointer to the newly allocated
 *		space in memory whiech contains a copy of string passed
 *		as parameter.
 * @str: pointer to the parameter string.
 * Return: pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *dup;
	int len = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	dup = malloc((sizeof(char) * len) + 1);
	if (dup == 0)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}
