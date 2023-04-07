#include "main.h"

/**
 * _strcpy - copies a string to a buffer
 *
 * @dest: pointer to the buffer to copy the string to
 * @src: pointer to the string to be copied
 *
 * Return: pointer to the destination buffer
 */

char *_strcpy(char *dest, char *src)
{
  int i;

  for (i = 0; src[i] != '\0'; i++)
    dest[i] = src[i];

  dest[i] = '\0';

  return dest;
}