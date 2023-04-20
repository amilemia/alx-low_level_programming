#include <stdio.h>
#include <stdlib.h>

void print_opcodes(int num_bytes);

/**
 * main - entry point of the program
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the arguments passed to the program
 *
 * Return: 0 on success, 1 or 2 on failure
*/

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes <= 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(num_bytes);

	return (0);
}

/**
 * print_opcodes - prints the opcodes of the main function
 * @num_bytes: the number of bytes of the main function to print
 * Return: void
 */

void print_opcodes(int num_bytes)
{
	int i;
	char *main_func_ptr = (char *)main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02hhx", *(main_func_ptr + i));
		if (i < num_bytes - 1)
			printf(" ");
	}
	printf("\n");
}
