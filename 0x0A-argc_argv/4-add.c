#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if succesful, otherwise 1
 */

int main(int argc, char *argv[])
{
	int n, m, sum;

	for (n = 1; n < argc; n++)
	{
		for (m = 0; argv[n][m]; m++)
		{
			if (argv[n][m] < '0' || argv[n][m] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[n]);
	}
	printf("%d\n", sum);
	return (0);
}
