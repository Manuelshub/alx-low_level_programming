#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: minimum value of the array.
 * @max: maximum value of the array.
 * Return: pointer to the array of integers.
 */
int *array_range(int min, int max)
{
	int *ptarr;
	int i = 0, total;

	if (min > max)
	{
		return (NULL);
	}
	total = max - min + 1;
	/*allocating memory for our pointer variable*/
	ptarr = malloc(sizeof(int) * total);
	if (ptarr == NULL)
	{
		return (NULL);
	}
	while (i < total)
	{
		/*Initializing each element of array*/
		ptarr[i] = min;
		min++;
		i++;
	}

	return (ptarr);
}
