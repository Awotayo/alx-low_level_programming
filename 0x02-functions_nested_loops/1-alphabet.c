#include "main.h"
/**
 * main - prints the alphabet, in lowercase, followed by a new line.
 * Return: 0 if successful
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
