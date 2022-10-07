#include "main.h"
#include <stdlib.h>

/**
 * *array_range - function that creates an array of integers.
 * @min: minimum value of array
 * @max: maximuum value of array
 * Return: pointer to array memory if successfull
 * otherwise NULL
 */

int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}
