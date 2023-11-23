#include "main.h"

/**
 * _strlen - Calculates the lwngth of a string.
 * @s: pointer to the string.
 * Return: length of the string.
 */
int _strlen(char *s)
{
	int i = 0;

	if (s == NULL)
		return (0);
	while (s[i])
		i++;
	return (i);
}

/**
 * is_palindrome_helper - helps check for palindrome string
 * @s: the string.
 * @start: the start index of the string.
 * @end: the end index of the string.
 * Return: 1 if the string is palindrome,
 *			Otherwise 0.
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks for palindrome strings.
 * @s: the string to be checked.
 * Return: i if pa;lindromic, else 0.
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (is_palindrome_helper(s, 0, len - 1));
}
