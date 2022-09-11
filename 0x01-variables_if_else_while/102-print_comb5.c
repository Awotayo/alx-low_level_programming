#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers.
 * Return: 0 if successful
 */
int main(void)
{
	int n, k;

	for (n  = 0; n <= 98; n++)
	{
		for (k = n + 1; k <= 99; k++)
		{
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			putchar(' ');
			putchar((k / 10) + '0');
			putchar((k % 10) + '0');
			if (n == 98 && k == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

