#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using Binary search algorithm.
 *
 * @array: the pointer to the first element of the array to search in.
 * @size: the number of elements in the array.
 * @value: the value to search for.
 *
 * Return: the index where the value is located, -1 if fail.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, i;
	int m;

	if (!array)
		return (-1);
	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i != left)
				printf(", ");
			printf("%d", (int)i);
		}
		printf("\n");
		m = (int)((left + right) / 2);
		if (array[m] < value)
			left = m + 1;
		else if (array[m] > value)
			right = m - 1;
		else
			return (m);
	}
	return (-1);
}
