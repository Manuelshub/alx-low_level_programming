#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
 * find_strlen - this returns the length of a string
 * @s: mthe string to be measured
 *
 * Return: the length of the string
 */

int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}
	return (len);
}

/**
 * check_palindrome - this checks if a sit is palindrome
 * @s: this is the string to be checked
 * @len: this is the length of n
 * @index: this is the string to be printed
 *
 * Return: if the string is a palindrome - 1
 *		if the string is not a palindrome - 0
 */

int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len] / 2)
		return (1);

	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));

	return (0);
}

/**
 * is_palindrome - this checks if the string is a palindrome
 * @s: this is the string to be checked
 * Return: if the string is a palindrome - 1
 *		if the string is not a palindrome - 0
 */
int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, index));
}

