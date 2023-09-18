#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: pointer to the first int.
 * @b: pointer to the second int.
 */
void swap_int(int *a, int *b)
{
	/* Swapping without a temporary variable */

	*a = *a ^ *b;/*performing a binary XOR operation on both operand*/
	*b = *a ^ *b;
	*a = *b ^ *a;
}
