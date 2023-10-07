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

	if (min > max)
	{
		return (NULL);
	}
	/*allocating memory for our pointer variable*/
	ptarr = malloc(sizeof(int) * (max - min) + 1);
	if (ptarr == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		/*Initializing each element of array*/
		*(ptarr + min) = min;
		min++;
	}

	return (ptarr);
}
