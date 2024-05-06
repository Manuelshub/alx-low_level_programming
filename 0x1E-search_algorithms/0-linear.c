#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using
 * linear search algorithm.
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in an array
 * @value: the value to search for
 *
 * Return: the first index where value is located, otherwise -1 if the
 * value if not present in the array or the array is NULL.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (array[i] == value)
			return ((int)i);
	}
	return (-1);
}
