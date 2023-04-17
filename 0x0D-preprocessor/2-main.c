/**
 * main - Entry point of the program
 *
 * Description: This program prints the name of the file it was compiled from,
 *              followed by a new line. It uses the __FILE__ macro to get the
 *              name of the current source file being compiled, and prints it
 *              using the printf function.
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
