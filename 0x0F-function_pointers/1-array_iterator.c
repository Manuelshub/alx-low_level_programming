#include "function_pointers.h"

/**
 * array_iterator - executes a function given as parameter.
 * @array: the array of integers.
 * @size: the size of the array.
 * @action: function pointer.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t cont;

	if (array || action)
	{
		for (cont = 0; cont < size; cont++)
		{
			action(array[cont]);
		}
	}
}
