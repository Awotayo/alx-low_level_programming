#include <stdio.h>
/**
 * main - print alphabets
 * Return: 0 is successful
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
