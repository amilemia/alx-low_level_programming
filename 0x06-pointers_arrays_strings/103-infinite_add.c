#include "main.h"

/**
 * rev_string - Reverse an array
 * @n: Integer parameter
 * Return: 0
*/

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}

/**
 * infinite_add - Adds two numbers
 * @n1: Representation of first number to add
 * @n2: Representation of second number to add
 * @r: Pointer to buffer that the function will use to store the result
 * @size_r: Buffer size
 * Return: Pointer to function that will store the result
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0, i = 0, j = 0, count = 0;
	int w_n1 = 0, w_n2 = 0, sum = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || carry == 1)
	{
		if (i < 0)
			w_n1 = 0;
		else
			w_n1 = *(n1 + i) - '0';
		if (j < 0)
			w_n2 = 0;
		else
			w_n2 = *(n2 + j) - '0';
		sum = w_n1 + w_n2 + carry;
		if (sum >= 10)
			carry = 1;
		else
			carry = 0;
		if (count >= (size_r - 1))
			return (0);
		*(r + count) = (sum % 10) + '0';
		count++;
		j--;
		i--;
	}
	if (count == size_r)
		return (0);
	*(r + count) = '\0';
	rev_string(r);
	return (r);
}
