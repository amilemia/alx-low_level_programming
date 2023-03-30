#include "main.h"

/**
 * *string_toupper - Change all lowercase to uppercase
 * @c: String to change
 *
 * Return: Changed string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}

	return (str);
}
