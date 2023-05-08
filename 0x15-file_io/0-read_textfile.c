#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 *
 * Return: the actual number of letters read and printed, or 0 on error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters + 1));
	if (!buf)
		return (0);

	r = read(fd, buf, letters);
	if (r == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	buf[r] = '\0';

	w = write(STDOUT_FILENO, buf, r);
	if (w == -1 || w != r)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);

	return (r);
}
