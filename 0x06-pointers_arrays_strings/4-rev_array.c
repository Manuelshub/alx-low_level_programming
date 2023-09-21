#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: pointer to the array of integers.
 * @n: number of elements of the array.
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int temp;
	int *end;

	/* giving end the address of the last element*/
	end = a + (n - 1);
	while (a < end)
	{
		/* Swapping the values of both pointers*/
		temp = *a;
		*a = *end;
		*end = temp;
		/* moving both pointers to their next addresses respectively*/
		a++;
		end--;
	}
}
