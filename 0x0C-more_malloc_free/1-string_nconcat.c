#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: pointer to the first string.
 * @s2: ppointer to the second string.
 * @n: number of bytes of s2 to be added.
 * Return: pointer to the concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptarr;
	unsigned int i, len, len2;

	if (s1 == NULL)
		len = 0;
	else
	{
		for (len = 0; s1[len]; len++)
			;
	}
	if (s2 == NULL)
		len2 = 0;
	else
	{
		for (len2 = 0; s2[len2]; len2++)
			;
	}
	if (n >= len2)
	{
		ptarr = malloc(sizeof(char) * (len + len2 + 1));
		if (ptarr == NULL)
			return (NULL);
	}
	else
	{
		len2 = n;
		ptarr = malloc(sizeof(char) * (len + len2 + 1));
		if (ptarr == NULL)
			return (NULL);
	}
	for (i = 0; i < len; i++)
		ptarr[i] = s1[i];

	for (i = 0; i < len2; i++)
		ptarr[i + len] = s2[i];

	ptarr[len + len2] = '\0';

	return (ptarr);
}
