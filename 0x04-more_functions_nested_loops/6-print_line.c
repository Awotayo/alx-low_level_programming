#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of count
 */
void print_line(int n)
{
	int k;

	if (n > 0)
	{
		for (k = 0; k < n; k++)
			_putchar('_');
	}
	_putchar('\n');
}
