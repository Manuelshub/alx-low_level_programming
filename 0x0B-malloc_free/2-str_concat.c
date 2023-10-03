#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: pointer to the first string.
 * @s2: pointer to the second string.
 * Return: pointwer to the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	char *dest;
	int len = 0;
	int cont = 0;
	int i, j;

	if (s1 == NULL || s2 == NULL)
	{
		return ("");
	}
	while (s1[len] != '\0' || s2[cont] != '\0')
	{
		len++;
		cont++;
	}
	dest = malloc((len + cont) * sizeof(char) + 1);
	if (dest == 0)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		dest[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++, i++)
	{
		dest[i] = s2[j];
	}
	dest[i] = '\0';
	return (dest);
}
