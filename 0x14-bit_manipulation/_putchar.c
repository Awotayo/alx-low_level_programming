#include "main.h"
#include <unistd.h>

/**
 * _putchar - print char stdout
 * @c: character to print
 * Return: 1 if successful
 * else return zero
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
