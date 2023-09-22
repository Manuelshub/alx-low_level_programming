#include "main.h"

/**
 * leet - function that encodes a string in 1337.
 * @s: the pointer to the string.
 * Return: the encoded string.
 */
char *leet(char *s)
{
	int i, j;
	char uppercase[] = {'A', 'E', 'O', 'T', 'L'};
	char lowercase[] = {'a', 'e', 'o', 't', 'l'};
	char nums[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == uppercase[j] || s[i] == lowercase[j])
			{
				s[i] = nums[j];
				break;
			}
		}
	}
	return (s);
}
