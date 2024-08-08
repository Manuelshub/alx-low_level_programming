#include <stdio.h>
#include <stdlib.h>

/**
 * check_arg - Checks if a string contains only numbers.
 *
 * @s: the string.
 *
 * Return: 0 if it contains and 1 if not.
 */
int check_arg(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - Entry point.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0 if successful.
 */
int main(int argc, char **argv)
{
	int i = 1;
	int sum = 0;
	char *argument;

	if (argc <= 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			argument = argv[i];

			if (!check_arg(argument))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
