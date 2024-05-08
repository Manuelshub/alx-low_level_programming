#include "search_algos.h"

/**
 * min - Finds the minimum of two numbers.
 *
 * @a: first number.
 * @b: second number.
 *
 * Return: the minimum of both numbers.
 */
int min(int a, int b)
{
	return ((a < b) ? a : b);
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the Exponential search algorithm.
 *
 * @array: the pointer to the first element of the array.
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: the first index of where value is located otherwise -1.
 */
int exponential_search(int *array, size_t size, int value)
{
	int i;

	if (!array || size == 0)
		return (-1);
	i = 1;

	while ((size_t)i < size && array[i] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i *= 2;
	}
	return (binary_search_hp(array, i / 2, min(i, size - 1), value));
}

/**
 * binary_search_hp - binary search helper function
 *
 * @array: pointer to the first element of the array.
 * @low: the lower value of the array.
 * @high: the higher value of the array.
 * @value: the value to search for
 *
 * Return: the first index where value is located otherwise -1.
 */
int binary_search_hp(int *array, int low, int high, int value)
{
	int mid, i;

	if (!array)
		return (-1);

	printf("Value found between indexes [%d] and [%d]\n", low, high);
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i != low)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");
		mid = (int)((low + high) / 2);
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
