#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int n, m, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	n = atoi(argv[1]);
	m = atoi(argv[2]);
	mul = n * m;
	printf("%d\n", mul);
	return (0);
}

