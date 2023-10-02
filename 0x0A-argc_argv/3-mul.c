#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0 if successful and 1 if otherwise.
 */
int main(int argc, char **argv)
{
	int i, mul = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
