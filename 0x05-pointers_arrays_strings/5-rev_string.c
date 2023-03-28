#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: The string
 */

void rev_string(char *s)
{
	int i, len = 0;
	char swap;

	while (s[len])
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		swap = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = swap;
	}
}
