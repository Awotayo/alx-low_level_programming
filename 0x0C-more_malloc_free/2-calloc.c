#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - function that allocates
 * memory for an array, using malloc
 * @nmemb: number element
 * @size: size of element
 * Return: a pointer to allocated memory
 * otherwise NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *n;
	char *mk;
	unsigned int count;

	if (nmemb == 0 || size == 0)
		return (NULL);

	n = malloc(size * nmemb);
	if (n == NULL)
		return (NULL);

	mk = n;

	for (count = 0; count < (size * nmemb); count++)
		mk[count] = '\0';
	return (n);
}
