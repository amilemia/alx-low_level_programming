#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum;
	int inc;

	for (inc = 0; inc < 50; inc++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);
		fib1 = fib2;
		fib2 = sum;
		if (inc == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}

