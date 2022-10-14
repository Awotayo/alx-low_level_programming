#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 * @name: name to print
 * @f: pointer to function that print name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
