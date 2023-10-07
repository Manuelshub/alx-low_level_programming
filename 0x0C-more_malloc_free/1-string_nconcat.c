#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: the pointer to the first string.
 * @s2: pointer to the string.
 * @n: number of bytes of s2.
 * Return: pointer to the concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int i, len, len2;

	len = strlen(s1);
	len2 = strlen(s2);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (len2 > n)
		len2 = n;
	arr = malloc(sizeof(char) * (len + len2) + 1);
	if (arr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		arr[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		arr[i + len] = s2[i];
	}
	arr[len + len2] = '\0';

	return (arr);
}
