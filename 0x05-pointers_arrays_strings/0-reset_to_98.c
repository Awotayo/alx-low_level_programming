#include "main.h"

/**
 * reset_to_98 - function that takes a pointer to an int
 *as parameter and updates the value it points to to 98
 *@n: pointer to int
 */

void reset_to_98(int *n)
{
	int k = 98;

	n = &k;

}