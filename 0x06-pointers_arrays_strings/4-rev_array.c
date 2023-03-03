#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: this is the array of integers to be reversed
 * @n: this is the number of element in the array
 */

void reverse_array(int *a, int n)
{
	int pin;
	int apple;

	for (apple = n - 1; apple >= n / 2; apple--)
	{
		pin = a[n - 1 - apple];
		a[n - 1 - apple] = a[apple];
		a[apple] = pin;
	}
}
