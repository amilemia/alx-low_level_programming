#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Print numbers followed by a new line
 *
 * @separator: String to be printed between numbers
 * @n: Number of integers passed to the function
 * @...: Variable number of integer arguments to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);

	printf("\n");
}
