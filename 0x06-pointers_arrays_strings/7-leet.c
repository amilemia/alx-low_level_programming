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
	char leet_chars[5] = {'4', '3', '0', '7', '1'};
	int i = 0;

	while (s[i])
	{
		int j = (s[i] == 'a' || s[i] == 'A') ? 0 :
			(s[i] == 'e' || s[i] == 'E') ? 1 :
			(s[i] == 'o' || s[i] == 'O') ? 2 :
			(s[i] == 't' || s[i] == 'T') ? 3 :
			(s[i] == 'l' || s[i] == 'L') ? 4 : -1;
		if (j != -1)
			s[i] = leet_chars[j];
		i++;
	}
	return (str);
}
