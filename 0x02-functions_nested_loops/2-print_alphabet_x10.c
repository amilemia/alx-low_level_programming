#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times in lowercase followed by a new line.
 *
 * Return: void
*/
void print_alphabet_x10(void)
{
	char j;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
				_putchar('\n');
	}
}
