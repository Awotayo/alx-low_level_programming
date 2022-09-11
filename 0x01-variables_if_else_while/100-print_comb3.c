#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: 0 if successful
 */
int main(void)
{
	int n, k;

	for (n = 0; n <= 8; n++)
	{
		for (k = 1; k <= 9; k++)
		{
			putchar((n % 10) + '0');
			putchar((k % 10) + '0');
			if (n == 8 && n == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
