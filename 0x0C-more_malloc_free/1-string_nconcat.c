#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of byte
 * Return: pointer to memory if successful
 * otherwise NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		str[len++] = s1[index];
	for (index = 0; s2[index] && index < n; index++)
		str[len++] = s2[index];

	str[len] = '\0';

	return (str);
}
