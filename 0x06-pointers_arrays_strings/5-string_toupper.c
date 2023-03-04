#include "main.h"

/**
 * string_toupper - this changes all lowercase letters
 *			of a string to uppercase
 * @str: this is the string to be changed from lowercase
 * to uppercase
 * @a:this is a parameter
 * @z:this is the second parameter
 *
 * Return: this is a pointer to the changed string
 */

char *string_toupper(char *)
{
	int apple = 0;

	while (str[apple])
	{
		if (str[apple] >= 'a' && str[apple] <= 'z')
			str[apple] -= 32;

		apple++;
	}
	return (str);
}
