#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks if a letter is uppercase
 * @c: the character to be checked
 *
 * Return: 1 if c is an uppercase letter, else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
