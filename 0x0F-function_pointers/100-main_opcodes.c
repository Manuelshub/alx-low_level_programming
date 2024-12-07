#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 * @ac: argument count.
 * @av: argument vector.
 * Return: 0.
 */
int main(int ac, char **av)
{
	int num_bytes, i;
	unsigned char *byte_arr;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(av[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	byte_arr = (unsigned char *)&main;

	for (i = 0; i < num_bytes; i++)
	{
		if (i != 0)
			printf(" ");
		printf("%02x", byte_arr[i]);
	}
	printf("\n");

	return (0);
}
