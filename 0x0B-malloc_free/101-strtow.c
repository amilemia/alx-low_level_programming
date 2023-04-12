#include "main.h"
#include <stdlib.h>

/**
 * word_count - Counts the number of words in a string
 * @str: Pointer to the string
 *
 * Return: The number of words in the string
 */

int word_count(char *str)
{
    int word = 0, i, j = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
            word = 0;
        else if (word == 0)
        {
            word = 1;
            j++;
        }
    }
    return (j);
}

/**
 * create_matrix - Allocate memory for a matrix of strings
 * @words: Words in string
 *
 * Return: Pointer to matrix
 */

char **create_matrix(int words)
{
    char **matrix;

    matrix = malloc(sizeof(char *) * (words + 1));
    if (matrix == NULL)
        return (NULL);

    return (matrix);
}

/**
 * fill_matrix - Fills the matrix with the words from the string
 * @str: Pointer to string
 * @matrix: Pointer to matrix
 *
 * Return: Pointer to filled matrix
 */

char **fill_matrix(char *str, char **matrix)
{
    char *tmp;
    int i, k = 0, len = 0, c = 0, start = 0, end = 0;

    while (str[len] != '\0')
        len++;

    for (i = 0; i <= len; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            if (c)
            {
                end = i;
                tmp = malloc(sizeof(char) * (c + 1));

                if (tmp == NULL)
                {
                    for (k = k - 1; k >= 0; k--)
                        free(matrix[k]);

                    free(matrix);
                    return (NULL);
                }

                while (start < end)
                    *tmp++ = str[start++];
                *tmp = '\0';
                matrix[k++] = tmp - c;
                c = 0;
            }
        }
        else if (c++ == 0)
            start = i;
    }
    matrix[k] = NULL;

    if (k == 0)
    {
        free(matrix);
        return (NULL);
    }

    return (matrix);
}

/**
 * strtow - Splits a string into words
 * @str: Pointer to string
 *
 * Return: Pointer to array of strings, NULL on failure
 */

char **strtow(char *str)
{
    char **matrix;
    int words;

    if (str == NULL || str[0] == '\0')
        return (NULL);

    words = word_count(str);
    matrix = create_matrix(words);

    if (matrix == NULL)
        return (NULL);

    matrix = fill_matrix(str, matrix);

    return (matrix);
}
