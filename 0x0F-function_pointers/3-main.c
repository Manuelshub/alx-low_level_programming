#include "3-calc.h"

/**
 * main - Entry point.
 * @ac: argument count.
 * @av: argument vector.
 * Return: 0.
 */
int main(int ac, char **av)
{
	int num1, num2, result;
	int (*operator)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(av[1]);
	num2 = atoi(av[3]);
	operator = get_op_func(av[2]);

	if (operator == NULL || !operator)
	{
		printf("Error\n");
		exit(99);
	}

	result = operator(num1, num2);
	printf("%d\n", result);

	return (0);
}
