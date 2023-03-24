#include <stdio.h>

/**
 * main - prints numbers from 1 to 100
 * if number is multiple of 3, prints Fizz, if multiple of 5 prints Buzz
 * if number multiple of both prints FizzBuzz
 * Return: 0
 */

int main(void)
{
	int i;
	char fizz[] = "Fizz";
	char buzz[] = "Buzz";
	char fizzbuzz[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s", fizzbuzz);
		}
			else if (i % 3 == 0)
			{
				printf("%s", fizz);
			}
			else if (i % 5 == 0)
			{
				printf("%s", buzz);
			}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
