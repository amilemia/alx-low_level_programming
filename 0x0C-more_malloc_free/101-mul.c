#include <stdio.h>
#include <stdlib.h>
#include <main.h>

int is_digit(char c);

/**
 * is_digit - checks if a character is a digit
 * @c: the character to check
 * Return: 1 if c is a digit, 0 otherwise
 */

int is_digit(char c)
{
return (c >= '0' && c <= '9');
}

/**
 * main - multiply two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 98 on error
 */

int main(int argc, char *argv[])
{
int i, j, res, carry;
int *mul;
int len1, len2;

if (argc != 3)
{
printf("Error\n");
return (98);
}
len1 = 0;
while (argv[1][len1])
{
if (!is_digit(argv[1][len1]))
{
printf("Error\n");
return (98);
}
len1++;
}
len2 = 0;
while (argv[2][len2])
{
if (!is_digit(argv[2][len2]))
{
printf("Error\n");
return (98);
}
len2++;
}
mul = calloc(len1 + len2, sizeof(int));
if (!mul)
return (1);
for (i = len1 - 1; i >= 0; i--)
{
carry = 0;
for (j = len2 - 1; j >= 0; j--)
{
res = (argv[1][i] - '0') * (argv[2][j] - '0') + mul[i + j + 1] + carry;
mul[i + j + 1] = res % 10;
carry = res / 10;
}
mul[i + j + 1] = carry;
}
i = 0;
while (mul[i] == 0 && i < len1 + len2 - 1)
i++;
for (; i < len1 + len2; i++)
_putchar(mul[i] + '0');
_putchar('\n');
free(mul);
return (0);
}
