#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: value to check
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int line = n % 10;

	if (line < 0)
		line *= -1;

	_putchar(line + '0');

	return (line);
}
