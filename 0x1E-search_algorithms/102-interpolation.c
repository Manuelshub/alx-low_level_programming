#include "search_algos.h"

/**
 * interpolation_search - searches an array of integers using interpolation
 * search algorithm.
 *
 * @array: pointer to the first element of the array
 * @size: the length of the array.
 * @value: the value to search for.
 *
 * Return: the index of value otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	int high, low;
	size_t pos;

	if (!array || size == 0)
		return (-1);
	high = (int)size - 1, low = 0;

	while (value >= array[low] && value <= array[high] && low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] -
						array[low])) * (value - array[low]));
		if (array[pos] == value)
		{
			printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);
			return (pos);
		}
		else if (array[pos] < value)
		{
			printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);
			low = pos + 1;
		}
		else
			high = pos - 1;
	}
	printf("Value checked array[%d] is out of range\n", high);
	return (-1);
}
