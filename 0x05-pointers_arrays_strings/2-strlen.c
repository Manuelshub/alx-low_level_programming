#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: pointer to the first character of the string.
 *
 * Return: the length of the string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		/*incrementing count*/
		count += 1;
		/*moving the pointer to the next address*/
		s += 1;
	}
	return (count);
}
