#include "main.h"

/**
 * str_len - Return length of string
 * @s: The string
 *
 * Return: The length of the string
 */

int str_len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + str_len(s + 1));
	}
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len;

	len = str_len(s);

	if (len <= 1)
	{
		return (1);
	}
	else if (*s != *(s + len - 1))
	{
		return (0);
	}
	else
	{
		return (is_palindrome(s + 1) && 1);
	}
}
