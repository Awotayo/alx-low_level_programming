#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 * @argc: argument to count
 * @argv: argument vector
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int v;

	for (v = 0; v < argc; v++)
		printf("%s\n", argv[v]);
	return (0);
}
