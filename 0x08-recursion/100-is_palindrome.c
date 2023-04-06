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
 * checkPal - Check if a string is a palindrome
 * @s: The string to check
 * @start: Starting index of string
 * @end: Ending index of string
 * 
 * Return: 1 if palindrome, 0 otherwise
*/

int checkPal(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (checkPal(s, start + 1, end - 1));
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
	else
	{
		return (checkPal(s, 0, len - 1));
	}
}
