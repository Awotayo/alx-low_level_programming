#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from
 * Using only putchar function
 * Return: 0 if successful
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar((n % 10) + 0);
	}
	putchar('\n');
	return (0);
}
