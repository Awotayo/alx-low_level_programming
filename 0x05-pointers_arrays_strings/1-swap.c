#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: value 1 to be swap
 * @b: value 2 to be swap
 */

void swap_int(int *a, int *b)
{
	int n = *a;

	*a = *b;
	*b = n;
}
