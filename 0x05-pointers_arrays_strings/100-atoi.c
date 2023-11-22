#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: pointer to the string.
 * Return: the integer.
 */
int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1, i;

	if (s == NULL)
		return (0);
	for (i = 0; s[i]; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] == ' ' || s[i] == '+')
			continue;
		if (s[i] >= '0' && s[i] <= '9')
			num = num * 10 + (s[i] - '0');
		else if (num > 0)
			break;
	}
	return (num * sign);
}
