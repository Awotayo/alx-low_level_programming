#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * Print all the letters except q and e
 * Return: 0 if succesful
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
