#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
    long int n = 612852475143;
    int i;

    while (n % 2 == 0)
    {
        n /= 2;
        i = 2;
    }

    for (i = 3; i <= n / i; i += 2)
    {
        while (n % i == 0)
        {
            n /= i;
        }
    }

    if (n > 2)
    {
        printf("%ld\n", n);
    }
    else
    {
        printf("%d\n", i-2);
    }

    return 0;
}
