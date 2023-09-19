#include "main.h"

/**
 * print_array - Prints n number of an array of integers.
 * @a: pointer to the array of integers.
 * @n: number of element of the array.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
