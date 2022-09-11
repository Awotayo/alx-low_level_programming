#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: 0 if successful
 */
int main(void)
{
	int n, k, d;

	for (n = 0; n <= 7; n++)
	{
		for (k = n + 1; k <= 8; k++)
		{
			for (d = k + 1; d <= 9; d++)
			{
				putchar((n % 10) + '0');
				putchar((k % 10) + '0');
				putchar((d % 10) + '0');
				if (n == 7 && k == 8 && d == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

