#include "main.h"
#include <unistd.h>

/**
 * _putchar - _putchar file
 * Return: character
 */

int _putchar(void)
{
	return (write(1, &c, 1));
}
