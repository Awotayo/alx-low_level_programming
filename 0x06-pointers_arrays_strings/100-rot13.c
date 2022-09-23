#include "main.h"

/**
 * *rot13 - function that encodes a string using rot13
 * @s: string to decode
 * Return: string
 */

char *rot13(char *s)
{
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYABCDEFGHIJKLMZnopqrstuvwxyzabcdefghijklm";

	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[i])
			{
				s[i] = b[j];
				break;
			}
		}
	}
	return (s);
}
