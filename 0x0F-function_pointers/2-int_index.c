#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array of integers.
 * @si:wq
:ze: the size of the array.
 * @cmp: function pointer.
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
				break;
		}
	}
	if (!cmp(array[cont]))
		return (-1);
	return (cont);

}
