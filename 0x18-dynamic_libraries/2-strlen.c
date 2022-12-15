#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string to be checked
 * Return: length of *s
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}
