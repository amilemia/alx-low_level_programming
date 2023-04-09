#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of argc
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{

	if (argv[0])
		printf("%d\n", argc - 1);

	return (0);
}
