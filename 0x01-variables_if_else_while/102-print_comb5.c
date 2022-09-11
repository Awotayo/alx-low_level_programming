#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers.
 * Return: 0 if successful
 */
int main(void)
{
	int n, k, d, p;

	for (n  = 0; n <= 9; n++)
	{
		for (k = 0; k <= 8; k++)
		{
			for (d = 0; d <= 9; d++)
			{
				for (p = n + 1; p <= 9; p++)
				{
					putchar((n % 10) + '0');
					putchar((k % 10) + '0');
					putchar(',');
					putchar((d % 10) + '0');
					putchar((p % 10) + '0');
					if (n == 9 && k == 8 && d == 9 && p == 9)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

