#include "main.h"

/**
 * cap_string - this capitalizes all words of a string
 * @str: this is the string to be capitalized
 *
 * Return: this a pointer to the changed string
 */

char *cap_string(char *)
{
	int finger = 0;

	while (str[finger])
	{
		while (!(str[finger] >= 'a' && str[finger] <= 'z'))
			finger++;
		if (str[finger - 1] == ' ' ||
			str[finger - 1] == '\t' ||
			str[finger - 1] == '\n' ||
			str[finger - 1] == '\t' ||
			str[finger - 1] == ',' ||
			str[finger - 1] == ';' ||
			str[finger - 1] == '.' ||
			str[finger - 1] == '!' ||
			str[finger - 1] == '?' ||
			str[finger - 1] == '"' ||
			str[finger - 1] == '(' ||
			str[finger - 1] == ')' ||
			str[finger - 1] == '{' ||
			str[finger - 1] == '}' ||
			finger == 0)
			str[finger] -= 32;

		finger++;
	}

	return (str);
}
