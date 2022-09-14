#include "main.h"
/**
 * _islower - function that checks for lowercase characte
 * @c: character to be checked
 * Return: 1 if successful and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
