#include "function_pointers.h"

/**
 * int_index - searches for integer
 * @array: array of integer
 * @size: size of array
 * @cmp: pointer to function
 * Return: index of the 1st element for which the cmp
 * the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return(-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
}
