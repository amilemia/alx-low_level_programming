#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line
 * @str: The string
 */

void puts_half(char *str)
{
	int i = 1;

	while (str[i - 1])
		i++;

	i /= 2;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
