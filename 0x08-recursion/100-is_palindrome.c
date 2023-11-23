#include "main.h"


/**
 * _strlen_recursion - calculates the length of a string.
 * @s: pointer to the string.
 * Return: the length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
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
	int len = _strlen_recursion(s);

	return (is_palindrome_helper(s, 0, len - 1));
}
