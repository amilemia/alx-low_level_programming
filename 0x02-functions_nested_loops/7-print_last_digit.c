#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @num: The number in question.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int num)
{
	int result;

	result = num % 10;
	if (result < 0)
		result = -result;
	_putchar('0' + result);
	return (result);
}
