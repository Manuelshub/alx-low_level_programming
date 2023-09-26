#include "main.h"

/**
 * print_diagsums - prints the sum of two diagonals.
 * @a: the pointer to the array.
 * @size: size of the array.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int tright = 0;
	int tleft = 0;
	int s = size * size;

	for (i = 0; i < s; i += size + 1)
	{
		tleft += a[i];
	}
	for (i = size - 1; i < s - 1; i += size - 1)
	{
		tright += a[i];
	}
	printf("%d, %d\n", tleft, tright);
}
