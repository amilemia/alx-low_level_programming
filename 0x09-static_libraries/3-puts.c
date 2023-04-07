#include "main.h"

/**
 * _puts - writes a string to stdout
 *
 * @str: pointer to the string to be written
 *
 * Return: none
 */

void _puts(char *str)
{
  int i = 0;

  while (str[i] != '\0')
  {
    _putchar(str[i]);
    i++;
  }

  _putchar('\n');
}