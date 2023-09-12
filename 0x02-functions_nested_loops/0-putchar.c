#include "main.h"

/**
 * main - This is the main function
 * Return: 0
 */

int main(void)
{
	char s[] = "_putchar";
	int i;

	i = 0;
	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
