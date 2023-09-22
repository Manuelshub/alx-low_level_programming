#include "main.h"

/**
 * cap-string - capitalizes all words of astring.
 * @s: pointer to the string.
 * Return: the manipulated string.
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		/*checking if the first character is uppercase*/
		if (s[0] >= 'A' && s[i] <= 'Z')
		{
			s[0] = s[0] - 0;
		}
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			if (s[i + 1] >= 'a' && s[i] <= 'z')
				s[i + 1] = s[i + 1] - 32;
		}
	}
	return (s);
}
