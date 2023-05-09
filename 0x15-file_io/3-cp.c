#include "main.h"

#define BUFFER_SIZE 1024

/**
 * print_error - Print an error message to standard error and exit the program
 * @message: The error message to print
 * @filename: The name of the file to use in the error message
 * @exit_code: The exit code to use when exiting the program
 */

void print_error(char *message, char *filename, int exit_code)
{
	if (filename == NULL)
		dprintf(STDERR_FILENO, message, "");
	else
		dprintf(STDERR_FILENO, message, filename);

	exit(exit_code);
}

/**
 * copy_file - Copy the content of one file to another
 * @file_from: The name of the file to copy from
 * @file_to: The name of the file to copy to
 */

void copy_file(char *file_from, char *file_to)
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		print_error("Error: Can't read from file %s\n", file_from, 98);

	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (fd_to == -1)
	{
		close(fd_from);
		print_error("Error: Can't write to %s\n", file_to, 99);
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			print_error("Error: Can't write to %s\n", file_to, 99);
		}
	}

	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		print_error("Error: Can't read from file %s\n", file_from, 98);
	}

	if (close(fd_from) == -1 || close(fd_to) == -1)
		print_error("Error: Can't close fd\n", NULL, 100);
}

/**
 * main - Entry point. Copies the content of a file to another file
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to the strings which are the arguments
 *
 * Return: 0 on success, 97, 98, 99 or 100 on failure
 */

int main(int argc, char **argv)
{
	char *file_from, *file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	copy_file(file_from, file_to);

	return (0);
}
