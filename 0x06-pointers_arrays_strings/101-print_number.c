#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: integer to print
 */

void print_number(int n)
{
	unsigned int s;

	if (n < 0)
	{
		s = -n;
		_putchar('-');
	}
	if ((s / 10) > 0)
		print_number(s / 10);

	_putchar((s % 10) + '0');
}
