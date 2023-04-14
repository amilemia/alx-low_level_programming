#include "main.h"
#include <stdlib.h>

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
 * mul - multiply two positive numbers
 * @num1: first number
 * @num2: second number
 * Return: pointer to array of integers containing result, NULL if error occurs
 */
int *mul(char *num1, char *num2)
{
    int i, j, res, carry;
    int *mul;
    int len1 = 0, len2 = 0;

    while (num1[len1])
    {
        if (!is_digit(num1[len1]))
            return (NULL);
        len1++;
    }
    while (num2[len2])
    {
        if (!is_digit(num2[len2]))
            return (NULL);
        len2++;
    }
    mul = calloc(len1 + len2, sizeof(int));
    if (!mul)
        return (NULL);
    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        for (j = len2 - 1; j >= 0; j--)
        {
            res = (num1[i] - '0') * (num2[j] - '0') + mul[i + j + 1] + carry;
            mul[i + j + 1] = res % 10;
            carry = res / 10;
        }
        mul[i + j + 1] = carry;
    }
    return (mul);
}

/**
 * print_num - prints an array of integers as a number
 * @num: array of integers containing number to print
 * @len: length of array
 */
void print_num(int *num, int len)
{
    int i = 0;

    while (num[i] == 0 && i < len - 1)
        i++;
    for (; i < len; i++)
        _putchar(num[i] + '0');
    _putchar('\n');
}

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
    int *result;

    if (argc != 3)
    {
        _puts("Error");
        return (98);
    }

    result = mul(argv[1], argv[2]);
    if (!result)
    {
        _puts("Error");
        return (98);
    }

    print_num(result, _strlen(result));
    free(result);
    return (0);
}
