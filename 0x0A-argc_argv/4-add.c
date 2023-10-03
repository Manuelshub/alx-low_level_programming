#include <stdio.h>
#include <stdlib.h>

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

	if (argc <= 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] < '0' || *argv[i] > '9')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
