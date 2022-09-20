#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int i, j, k;
	char tmp;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	j = i - 1;
	for (k = 0; k < i / 2; i++)
	{
		tmp = s[k];
		s[k] = s[j];
		s[j--] = tmp;
	}
}

