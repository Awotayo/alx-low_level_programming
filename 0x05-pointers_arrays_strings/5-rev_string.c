#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int i, k;
	char tmp;

	while (s[k++])
	{
		i++;
	}

	for (k = i - 1; k >= i / 2; i--)
	{
		tmp = s[k];
		s[k] = s[i - k - 1];
		s[i - k - 1] = tmp;
	}
}

