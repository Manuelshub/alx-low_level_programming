#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array of integers.
 * @size: the size of the array.
 * @cmp: function pointer.
 *
 * Return: the index of the first element that cmp did not
 *	return 0 otherwise return -1.
 */
int int_index(int *array, int size, int(*cmp)(int))
{
	int cont;

	if (size <= 0)
		return (-1);
	if (cmp && array)
	{
		for (cont = 0; cont < size; cont++)
		{
			cmp(array[cont]);
			if (cmp(array[cont]))
				return (cont);
		}
	}
	return (-1);

}
