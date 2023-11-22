#include "main.h"

/**
 * _strlen - calculates the length f a string.
 * @s: the string.
 * Return: the length of the string.
 */
int _strlen(char *s)
{
	int len = 0;

	if (s == NULL)
		return (0);
	while (s[len])
		len++;
	return (len);
}

/**
 * infinite_add - Adds two numbers.
 * @n1: pointer to the first string of numbers.
 * @n2: pointer to the second string of numbers.
 * @r: buffer to store the result.
 * @size_r: size of the buffer.
 * Return: pointer to the buffer after addition has been done
 * Otherwise 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int sum, sum2, rem = 0, len, len2, size, num;

	len = _strlen(n1);
	len2 = _strlen(n2);
	if (len > len2)
		num = len;
	else
		num = len2;
	if (num + 1 > size_r)
		return (0);
	r[num] = '\0';
	for (size = num - 1; size >= 0; size--)
	{
		len--, len2--;
		if (len >= 0)
			sum = (n1[len] - '0');
		else
			sum = 0;
		if (len2 >= 0)
			sum2 = (n2[len2] - '0');
		else
			sum2 = 0;
		r[size] = (sum + sum2 + rem) % 10 + '0';
		rem = (sum + sum2 + rem) / 10;
	}
	if (rem == 1)
	{
		r[num + 1] = '\0';
		if (num + 2 > size_r)
			return (0);
		while (num-- >= 0)
			r[num + 1] = r[num];
		r[0] = rem + '0';
	}

	return (r);
}
