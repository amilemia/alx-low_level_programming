#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: pointer to the string to be searched
 * @accept: pointer to the string of characters to be matched
 *
 * Return: a pointer to the first occurrence in s of any byte in accept,
 *         or a pointer to the terminating null byte if no match is found
 */

char *_strpbrk(char *s, char *accept)
{
  int i, j;

  for (i = 0; s[i] != '\0'; i++)
  {
    for (j = 0; accept[j] != '\0'; j++)
    {
      if (s[i] == accept[j])
        return &s[i];
    }
  }

  return &s[i];
}