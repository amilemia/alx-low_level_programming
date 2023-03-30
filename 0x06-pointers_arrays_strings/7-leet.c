#include "main.h"

/**
 * *leet - Encodes a string into 1337
 * @str: The string to encode
 *
 * Return: The string encoded into 1337
 */

char *leet(char *str)
{
	char *s = str;
	char *leet_str = s;
	char leet_chars[5] = {'4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; s[i]; i++)
	{
		j = 0;
		if (s[i] == 'a' || s[i] == 'A')
			j = 0;
		else if (s[i] == 'e' || s[i] == 'E')
			j = 1;
		else if (s[i] == 'o' || s[i] == 'O')
			j = 2;
		else if (s[i] == 't' || s[i] == 'T')
			j = 3;
		else if (s[i] == 'l' || s[i] == 'L')
			j = 4;
		if (j)
			leet_str[i] = leet_chars[j];
	}
	return (str);
}
