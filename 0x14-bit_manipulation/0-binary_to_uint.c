#include "main.h"

/**
 * _strlen - calculates the length of a string.
 * @s: pointer to the string.
 * Return: the length of the string.
 */
unsigned int _strlen(const char *s)
{
	unsigned int l = 0;

	while (s[l])
		l++;

	return (l);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: ppointer to the string of 0 and 1 chars.
 * Return: the converted number or 0 if b is NULL, or 0 if if b
 *		contains chars apart from 0 and 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, i, n;
	unsigned int len = _strlen(b), j = len - 1;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++, j--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		else
		{
			n = b[j] - '0';
			num += n << i;
		}
	}
	return (num);
}
