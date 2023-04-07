#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: pointer to the string to be searched
 * @accept: pointer to the string of characters to be matched
 *
 * Return: the number of bytes in the initial segment of s that consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
  unsigned int count = 0;
  int i, j;

  for (i = 0; s[i] != '\0'; i++)
  {
    for (j = 0; accept[j] != '\0'; j++)
    {
      if (s[i] == accept[j])
      {
        count++;
        break;
      }
    }

    if (accept[j] == '\0')
      return count;
  }

  return count;
}