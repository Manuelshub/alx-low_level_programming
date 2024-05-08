#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers using
 * Jump search algorithm.
 *
 * @array: the pointer to the first element of the array to search in.
 * @size: the number of element in the array.
 * @value: the value to search for.
 *
 * Return: the first index where value is located else -1.
 */
int jump_search(int *array, size_t size, int value)
{
	int jump, prev, i;

	/* checking if the array is empty or the size is 0 */
	if (!array || size == 0)
		return (-1);

	jump = sqrt(size);
	prev = 0;

	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	/* Jump pattern*/
	while (array[jump] < value && jump < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", jump, array[jump]);
		prev = jump;
		jump += sqrt(size);
	}
	printf("Value found between indexes [%d] and [%d]\n", prev, jump);

	/*Linear search*/
	for (i = prev; i <= jump && i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
