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
	int i, j, mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		mul = i * j;
		printf("%d\n", mul);
	}
	return (0);
}
