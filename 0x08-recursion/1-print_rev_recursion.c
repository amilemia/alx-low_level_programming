#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: String to print
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
