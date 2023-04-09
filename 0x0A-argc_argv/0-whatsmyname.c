#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{

	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
