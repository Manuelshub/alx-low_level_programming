#include "main.h"

/**
 * argstostr - concatenates all arguments of your program.
 * @ac: argument count.
 * @av: argument vector.
 * Return: pointer to the concatenated string.
 */
char *argstostr(int ac, char **av)
{
	char *cat;
	int i, j, k;
	int len = ac;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	cat = malloc(len * sizeof(char) + 1);
	if (cat == NULL)
		return (NULL);
	i = 0;
	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k]; k++)
		{
			cat[i++] = av[j][k];
		}
		cat[i++] = '\n';
	}
	cat[len] = '\0';

	return (cat);
}
