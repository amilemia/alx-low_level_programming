#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: The string
 */

void print_rev(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		;

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
