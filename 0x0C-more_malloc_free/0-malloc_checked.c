#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - function that allocates memory using malloc
 * @b: number of byte to allocate
 * Return: pointer to memory
 */

void *malloc_checked(unsigned int b)
{
	void *num;

	num = malloc(b);
	if (num == NULL)
		exit(98);
	return (num);
}
