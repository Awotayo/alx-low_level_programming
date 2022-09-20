#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string to print
 */

void print_rev(char *s)
{
	int len, index;

	len = 0;

	while (s[len] != '\0')

		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
