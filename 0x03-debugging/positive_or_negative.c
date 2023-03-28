#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: o (success)
 */
int positive_or_negative(int n)
{

	printf("%d ", n);
	if (n == 0)
		printf("is zero");
	else if (n > 0)
		printf("is positive");
	else
		printf("is negative");
	printf("\n");
	return (n);
}
