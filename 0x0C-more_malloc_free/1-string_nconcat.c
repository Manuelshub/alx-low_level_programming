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
	int i, len;
	unsigned int j;

	len = strlen(s1);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	arr = malloc(sizeof(char) * (len + n) + 1);
	if (arr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		arr[i] = s1[i];
	}
	for (j = 0; j < n; j++, i++)
	{
		arr[i] = s2[j];
	}
	arr[i] = '\0';

	return (arr);
}
