#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: pointer to the string to be measured
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int longi = 0;


	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
