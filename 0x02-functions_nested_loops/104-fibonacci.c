#include <stdio.h>
/**
 * main - prints out first 98
 * fibonacci suit numbers
 * Return: Always 0
 */
int main(void)
{
	int inc;
	unsigned long fib1 = 0, fib2 = 1, fib3;
	unsigned long fib1_h1, fib1_h2, fib2_h1, fib2_h2;
	unsigned long h1, h2;

	for (inc = 0; inc < 92; inc++)
	{
		fib3 = fib1 + fib2;
		printf("%lu, ", fib3);
		fib1 = fib2;
		fib2 = fib3;
	}
	fib1_h1 = fib1 / 10000000000;
	fib2_h1 = fib2 / 10000000000;
	fib1_h2 = fib1 % 10000000000;
	fib2_h2 = fib2 % 10000000000;
	for (inc = 93; inc < 99; inc++)
	{
		h1 = fib1_h1 + fib2_h1;
		h2 = fib1_h2 + fib2_h2;
		if ((fib1_h2 + fib2_h2) > 9999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}
		printf("%lu%lu", h1, h2);
		if (inc != 98)
			printf(", ");

		fib1_h1 = fib2_h1;
		fib1_h2 = fib2_h2;
		fib2_h1 = h1;
		fib2_h2 = h2;
	}
	printf("\n");
	return (0);
}
