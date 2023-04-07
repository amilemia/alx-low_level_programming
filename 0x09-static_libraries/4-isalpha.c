#include "main.h"

/**
 * _isalpha - checks if a character is alphabetic
 *
 * @c: the character to be checked
 *
 * Return: 1 if c is a letter (upper or lower case), 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
