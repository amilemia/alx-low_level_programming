#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: pointer to the string to be searched
 * @needle: pointer to the substring to be found
 *
 * Return: a pointer to the beginning of the located substring, or a pointer to the terminating null byte
 *         of the string if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
  int i, j, k;

  for (i = 0; haystack[i] != '\0'; i++)
  {
    j = i;
    k = 0;

    while (needle[k] != '\0' && haystack[j] == needle[k])
    {
      j++;
      k++;
    }

    if (needle[k] == '\0')
      return &haystack[i];
  }

  return &haystack[i];
}