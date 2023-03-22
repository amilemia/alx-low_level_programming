#include <stdio.h>
/**
* main - prints sum of even fibonacci
* suit elements
* Return: Always 0
*/
int main(void)
{
unsigned long fib1 = 0, fib2 = 1, fib3 = 0, sum = 0;
while (fib3 <= 4000000)
{
fib3 = fib1 + fib2;
fib1 = fib2;
fib2 = fib3;

if ((fib1 % 2) == 0)
sum += fib1;

}
printf("%ld\n", sum);
return (0);
}
