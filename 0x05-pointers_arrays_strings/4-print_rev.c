#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: The string
 */

void print_rev(char *s)
{
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}
	end--;

	while (end >= s)
	{
		putchar(*end);
		end--;
	}
	putchar('\n');
}
