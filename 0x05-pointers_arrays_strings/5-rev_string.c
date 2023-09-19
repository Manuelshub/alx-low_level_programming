#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the string
 */
void rev_string(char *s)
{
	char *end;
	char temp;

	end = s;
	while (*(end) != '\0')
	{
		end++;
	}
	end--;
	while (s < end && *s != '\0')
	{
		temp = *s;
		*s = *end;
		*end = temp;

		s++;
		end--;
	}
}
